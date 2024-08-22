// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYERCOMMANDDIALOGACTION_H
#define MPCPLAYERCOMMANDDIALOGACTION_H

@class MPRemoteCommandHandlerDialogAction, NSString;

#import <Foundation/Foundation.h>

#import "MPCMediaRemoteController.h"

@interface MPCPlayerCommandDialogAction : NSObject {
    MPRemoteCommandHandlerDialogAction *_action;
    MPCMediaRemoteController *_controller;
}


@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSInteger type;


-(id)commandRequest;
-(id)description;
-(id)initWithMPAction:(id)arg0 request:(id)arg1 ;


@end


#endif