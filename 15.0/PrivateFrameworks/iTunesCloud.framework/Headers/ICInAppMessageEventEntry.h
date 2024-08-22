// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICINAPPMESSAGEEVENTENTRY_H
#define ICINAPPMESSAGEEVENTENTRY_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICInAppMessageEventEntry : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (readonly, nonatomic) NSDictionary *params; // ivar: _params


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageIdentifier:(id)arg0 params:(id)arg1 ;
-(id)initWithMessageIdentifier:(id)arg0 params:(id)arg1 eventIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif