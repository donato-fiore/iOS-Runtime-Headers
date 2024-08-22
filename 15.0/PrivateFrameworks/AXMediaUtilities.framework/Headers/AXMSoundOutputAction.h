// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMSOUNDOUTPUTACTION_H
#define AXMSOUNDOUTPUTACTION_H

@class NSString, NSURL;


#import "AXMOutputAction.h"

@interface AXMSoundOutputAction : AXMOutputAction {
    NSString *_soundID;
    NSURL *_soundFileURL;
}


@property (readonly, nonatomic) NSURL *soundFileURL;
@property (readonly, nonatomic) NSString *soundID;


+(id)_soundFileURLForSoundID:(id)arg0 ;
-(id)_initWithSoundID:(id)arg0 handle:(id)arg1 ;
-(id)_initWithURL:(id)arg0 handle:(id)arg1 ;
-(id)initWithSoundID:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif