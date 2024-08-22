// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMFALL_H
#define CMFALL_H


#import <Foundation/Foundation.h>


@interface CMFall : NSObject



+(BOOL)areStatsAvailable;
-(BOOL)setStatsEnabled:(BOOL)arg0 ;
-(NSUInteger)setDataCollectionConfiguration:(NSUInteger)arg0 ;
-(id)fallConfig;
-(id)sendStatsDataToUrl:(id)arg0 ;
-(void)sendStatsDataToUrl:(id)arg0 onCompletion:(id)arg1 ;
-(void)setHgalCaptureMode:(unsigned char)arg0 ;
-(void)simulateEvent:(NSUInteger)arg0 ;


@end


#endif