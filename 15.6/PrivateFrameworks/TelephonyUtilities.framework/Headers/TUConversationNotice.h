// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCONVERSATIONNOTICE_H
#define TUCONVERSATIONNOTICE_H

@class NSUUID, NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationActivitySession.h"

@interface TUConversationNotice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *item; // ivar: _item
@property (nonatomic) NSInteger queueItemType; // ivar: _queueItemType
@property (retain, nonatomic) TUConversationActivitySession *session; // ivar: _session
@property (nonatomic) NSInteger sessionEventType; // ivar: _sessionEventType
@property (retain, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationNotice:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif