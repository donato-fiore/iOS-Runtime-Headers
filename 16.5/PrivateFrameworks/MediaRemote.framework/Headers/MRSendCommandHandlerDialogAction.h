// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRSENDCOMMANDHANDLERDIALOGACTION_H
#define MRSENDCOMMANDHANDLERDIALOGACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRSendCommandHandlerEvent.h"
#import "_MRSendCommandResultHandlerDialogActionProtobuf.h"

@interface MRSendCommandHandlerDialogAction : NSObject <NSCopying>



@property (readonly, nonatomic) MRSendCommandHandlerEvent *event; // ivar: _event
@property (readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogActionProtobuf *protobuf;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)actionWithTitle:(id)arg0 type:(NSInteger)arg1 commandEvent:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTitle:(id)arg0 type:(NSInteger)arg1 commandEvent:(id)arg2 ;


@end


#endif