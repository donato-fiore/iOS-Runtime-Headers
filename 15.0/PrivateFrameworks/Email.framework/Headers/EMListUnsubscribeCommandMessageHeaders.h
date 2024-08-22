// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMLISTUNSUBSCRIBECOMMANDMESSAGEHEADERS_H
#define EMLISTUNSUBSCRIBECOMMANDMESSAGEHEADERS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *firstRecipient; // ivar: _firstRecipient
@property (readonly, nonatomic) NSString *firstSenderAddress; // ivar: _firstSenderAddress
@property (readonly, nonatomic) NSString *listID; // ivar: _listID
@property (readonly, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeaders:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif