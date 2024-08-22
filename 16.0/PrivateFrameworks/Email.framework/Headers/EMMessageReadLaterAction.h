// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGEREADLATERACTION_H
#define EMMESSAGEREADLATERACTION_H

@class NSDate;


#import "EMMessageChangeAction.h"

@interface EMMessageReadLaterAction : EMMessageChangeAction

@property (readonly, nonatomic) NSDate *readLaterDate; // ivar: _readLaterDate


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageListItems:(id)arg0 readLaterDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif