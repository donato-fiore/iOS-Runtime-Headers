// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCHATCONTEXT_H
#define IMCHATCONTEXT_H

@class NSUUID;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface IMChatContext : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSUUID *activeTelephonyConversationUUID; // ivar: _activeTelephonyConversationUUID
@property (readonly, nonatomic) NSInteger filterCategory; // ivar: _filterCategory
@property (readonly, nonatomic, getter=hasResponded) BOOL responded; // ivar: _responded
@property (readonly, nonatomic, getter=areSendersUnknown) BOOL sendersUnknown; // ivar: _sendersUnknown
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (readonly, nonatomic, getter=isSpam) BOOL spam; // ivar: _spam


-(id)_copyWithClass:(Class)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif