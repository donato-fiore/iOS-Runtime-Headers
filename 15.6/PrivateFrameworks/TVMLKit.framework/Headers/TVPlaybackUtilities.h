// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPLAYBACKUTILITIES_H
#define TVPLAYBACKUTILITIES_H


#import <Foundation/Foundation.h>


@interface TVPlaybackUtilities : NSObject



+(NSInteger)ikStateForTVPlaybackState:(NSInteger)arg0 ;
+(NSInteger)tvStateForIKState:(NSInteger)arg0 ;
+(id)stateStringForIKState:(NSInteger)arg0 ;
+(id)stateStringForTVPlaybackState:(NSInteger)arg0 ;


@end


#endif