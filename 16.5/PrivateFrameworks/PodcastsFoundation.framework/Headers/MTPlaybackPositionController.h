// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPLAYBACKPOSITIONCONTROLLER_H
#define MTPLAYBACKPOSITIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface MTPlaybackPositionController : NSObject {
    ? requestController;
}




-(id)init;
-(void)updatePlaybackPositionWithEpisodeStoreId:(NSInteger)arg0 completed:(BOOL)arg1 position:(CGFloat)arg2 account:(id)arg3 completion:(id)arg4 ;


@end


#endif