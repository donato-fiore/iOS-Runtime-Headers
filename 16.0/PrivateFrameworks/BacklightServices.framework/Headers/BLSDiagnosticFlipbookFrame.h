// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSDIAGNOSTICFLIPBOOKFRAME_H
#define BLSDIAGNOSTICFLIPBOOKFRAME_H

@class NSString, NSUUID;
@protocol BLSRenderedFlipbookFrame, NSSecureCoding, BSXPCCoding, BLSDiagnosticFlipbookFrameSurfaceProvider, BLSPresentationDateSpecifying;

#import <Foundation/Foundation.h>

#import "BLSDiagnosticPresentationDateSpecifier.h"

@interface BLSDiagnosticFlipbookFrame : NSObject <BLSRenderedFlipbookFrame, NSSecureCoding, BSXPCCoding>

 {
    BLSDiagnosticPresentationDateSpecifier *_specifier;
    id<BLSDiagnosticFlipbookFrameSurfaceProvider> *_provider;
}


@property (readonly, nonatomic) float apl; // ivar: _apl
@property (readonly, nonatomic) float aplDimming; // ivar: _aplDimming
@property (readonly, nonatomic) NSObject<BLSPresentationDateSpecifying> *bls_specifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger frameId; // ivar: _frameId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger memoryUsage; // ivar: _memoryUsage
@property (readonly, nonatomic) NSUInteger presentationTime; // ivar: _presentationTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__IOSurface surface;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)createWithFrame:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiagnosticFrame:(id)arg0 provider:(id)arg1 ;
-(id)initWithPresentationTime:(NSUInteger)arg0 frameId:(NSUInteger)arg1 apl:(float)arg2 aplDimming:(float)arg3 memoryUsage:(NSUInteger)arg4 specifier:(id)arg5 uuid:(id)arg6 provider:(id)arg7 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)releaseSurface;


@end


#endif