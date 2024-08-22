// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSDIAGNOSTICFLIPBOOKFRAME_H
#define BLSDIAGNOSTICFLIPBOOKFRAME_H

@class NSUUID, NSString;
@protocol BLSRenderedFlipbookFrame, NSSecureCoding, BSXPCCoding, BLSPresentationDateSpecifying, BLSDiagnosticFlipbookFrameSurfaceProvider;

#import <Foundation/Foundation.h>

#import "BLSDiagnosticPresentationDateSpecifier.h"

@interface BLSDiagnosticFlipbookFrame : NSObject <BLSRenderedFlipbookFrame, NSSecureCoding, BSXPCCoding>

 {
    BLSDiagnosticPresentationDateSpecifier *_specifier;
}


@property (readonly, nonatomic) float apl; // ivar: _apl
@property (readonly, nonatomic) float aplDimming; // ivar: _aplDimming
@property (readonly, nonatomic) NSObject<BLSPresentationDateSpecifying> *bls_specifier;
@property (readonly, nonatomic) NSUUID *bls_uuid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger frameId; // ivar: _frameId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted; // ivar: _inverted
@property (readonly, nonatomic) NSUInteger memoryUsage; // ivar: _memoryUsage
@property (readonly, nonatomic) NSUInteger presentationTime; // ivar: _presentationTime
@property (readonly, nonatomic) *__IOSurface rawSurface;
@property (readonly, nonatomic) CGRect rawSurfaceFrame; // ivar: _rawSurfaceFrame
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__IOSurface surface;
@property (weak) NSObject<BLSDiagnosticFlipbookFrameSurfaceProvider> *surfaceProvider; // ivar: _surfaceProvider
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)createWithFrame:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(id)arg0 ;
-(id)initWithPresentationTime:(NSUInteger)arg0 frameId:(NSUInteger)arg1 apl:(float)arg2 aplDimming:(float)arg3 memoryUsage:(NSUInteger)arg4 rawSurfaceFrameRect:(struct CGRect )arg5 inverted:(BOOL)arg6 specifier:(id)arg7 uuid:(id)arg8 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif