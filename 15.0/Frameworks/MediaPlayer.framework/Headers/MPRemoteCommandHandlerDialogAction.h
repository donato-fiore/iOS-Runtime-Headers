// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPREMOTECOMMANDHANDLERDIALOGACTION_H
#define MPREMOTECOMMANDHANDLERDIALOGACTION_H

@class MRSendCommandHandlerDialogAction, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPRemoteCommandEvent.h"

@interface MPRemoteCommandHandlerDialogAction : NSObject <NSCopying>



@property (readonly, nonatomic) MPRemoteCommandEvent *event;
@property (readonly, copy, nonatomic) MRSendCommandHandlerDialogAction *mediaRemoteType; // ivar: _mediaRemoteType
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type;


+(id)actionWithTitle:(id)arg0 type:(NSInteger)arg1 commandEvent:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMediaRemoteType:(id)arg0 ;


@end


#endif