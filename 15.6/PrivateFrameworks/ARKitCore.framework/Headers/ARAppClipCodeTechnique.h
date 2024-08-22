// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARAPPCLIPCODETECHNIQUE_H
#define ARAPPCLIPCODETECHNIQUE_H

@class NSDictionary, NSMutableDictionary, BCSAppClipCodeURLDecoder;


#import "ARImageBasedTechnique.h"

@interface ARAppClipCodeTechnique : ARImageBasedTechnique {
    *AppC3DSession _appClipCodeSession;
    NSDictionary *_appClipCodeTrackingOptions;
    NSMutableDictionary *_decodedURLs;
    BCSAppClipCodeURLDecoder *_urlDecoder;
}


@property (readonly, nonatomic) BOOL deterministicMode;
@property (readonly, nonatomic) BOOL ignoreURLLimitation; // ivar: _ignoreURLLimitation


+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
+(BOOL)shouldRunCameraOrScannerPerformanceTestingMode;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(NSInteger)captureBehavior;
-(id)initWithIgnoreURLLimitation:(BOOL)arg0 ;
-(id)processData:(id)arg0 ;
-(void)dealloc;
-(void)prepare:(BOOL)arg0 ;
-(void)setPowerUsage:(NSUInteger)arg0 ;


@end


#endif