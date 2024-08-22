// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGECONTENTDEFAULT_H
#define PKAPPLICATIONMESSAGECONTENTDEFAULT_H

@class NSString;
@protocol NSSecureCoding;


#import "PKApplicationMessageContent.h"
#import "PKApplicationMessageIcon.h"

@interface PKApplicationMessageContentDefault : PKApplicationMessageContent <NSSecureCoding>



@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) PKApplicationMessageIcon *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)createWithGroup:(id)arg0 action:(id)arg1 icon:(id)arg2 title:(id)arg3 body:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif