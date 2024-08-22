// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIATTRIBUTELABEL_H
#define DIATTRIBUTELABEL_H

@class NSString;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeLabel : DIAttribute <NSSecureCoding>



@property (copy, nonatomic) NSString *businessChatButtonTitle; // ivar: _businessChatButtonTitle
@property (copy, nonatomic) NSString *businessChatIdentifier; // ivar: _businessChatIdentifier
@property (copy, nonatomic) NSString *businessChatIntentName; // ivar: _businessChatIntentName
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSString *defaultValue; // ivar: defaultValue
@property (copy, nonatomic) NSString *detailBody; // ivar: _detailBody
@property (copy, nonatomic) NSString *detailSubtitle; // ivar: _detailSubtitle
@property (copy, nonatomic) NSString *detailTitle; // ivar: _detailTitle


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif