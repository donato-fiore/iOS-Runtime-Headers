// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEMESSAGEACTION_H
#define MEMESSAGEACTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MEMessageActionDestination.h"
#import "MEMessageActionFlagChange.h"

@interface MEMessageAction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MEMessageActionDestination *destination; // ivar: _destination
@property (readonly, nonatomic) MEMessageActionFlagChange *flagChange; // ivar: _flagChange
@property (readonly, nonatomic) NSInteger messageColor; // ivar: _messageColor
@property (readonly, nonatomic) NSInteger readStatus; // ivar: _readStatus


+(BOOL)supportsSecureCoding;
+(id)flagActionWithFlag:(NSInteger)arg0 ;
+(id)markAsReadAction;
+(id)markAsUnreadAction;
+(id)moveToArchiveAction;
+(id)moveToJunkAction;
+(id)moveToTrashAction;
+(id)setBackgroundColorActionWithColor:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(id)arg0 readStatus:(NSInteger)arg1 flagChange:(id)arg2 messageColor:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif