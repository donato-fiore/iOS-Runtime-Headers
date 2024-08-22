// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMAILHEADERS_H
#define SGMAILHEADERS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMailHeaders : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *cc; // ivar: _cc
@property (copy, nonatomic) NSArray *from; // ivar: _from
@property (readonly, copy, nonatomic) NSString *messageId; // ivar: _messageId
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSArray *to; // ivar: _to


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageId:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif