// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHPSEUDOFLIPBOOKFRAME_H
#define BLSHPSEUDOFLIPBOOKFRAME_H

@class NSString;
@protocol BLSHRenderedFlipbookFrame;

#import <Foundation/Foundation.h>

#import "BLSHPresentationDateSpecifier.h"

@interface BLSHPseudoFlipbookFrame : NSObject <BLSHRenderedFlipbookFrame>



@property (readonly, nonatomic) float apl;
@property (readonly, nonatomic) float aplDimming;
@property (readonly, nonatomic) BLSHPresentationDateSpecifier *bls_specifier; // ivar: _bls_specifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger frameId; // ivar: _frameId
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger memoryUsage; // ivar: _memoryUsage
@property (readonly, nonatomic) NSUInteger presentationTime; // ivar: _presentationTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__IOSurface surface;


-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)initWithPresentationTime:(NSUInteger)arg0 frameId:(NSUInteger)arg1 specifier:(id)arg2 memoryUsage:(NSUInteger)arg3 ;
-(void)releaseSurface;


@end


#endif