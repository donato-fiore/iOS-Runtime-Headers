// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSENDCOMMANDHANDLERDIALOG_H
#define MRSENDCOMMANDHANDLERDIALOG_H

@class NSMutableArray, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRSendCommandResultHandlerDialogProtobuf.h"

@interface MRSendCommandHandlerDialog : NSObject <NSCopying>

 {
    NSMutableArray *_mutableActions;
}


@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *localizedMessage; // ivar: _localizedMessage
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *protobuf;


+(id)dialogWithTitle:(id)arg0 message:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(void)addAction:(id)arg0 ;


@end


#endif