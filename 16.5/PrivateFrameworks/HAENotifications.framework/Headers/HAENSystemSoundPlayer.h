// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENSYSTEMSOUNDPLAYER_H
#define HAENSYSTEMSOUNDPLAYER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface HAENSystemSoundPlayer : NSObject {
    NSDictionary *_options;
}




+(id)sharedInstance;
-(id)init;
-(id)playSystemSoundWithEvent:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;


@end


#endif