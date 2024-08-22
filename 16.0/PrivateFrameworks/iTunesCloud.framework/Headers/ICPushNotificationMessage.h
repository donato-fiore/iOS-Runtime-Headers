// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPUSHNOTIFICATIONMESSAGE_H
#define ICPUSHNOTIFICATIONMESSAGE_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ICPushNotificationMessage : NSObject

@property (readonly, nonatomic) NSInteger accountDSID; // ivar: _accountDSID
@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) NSDictionary *apsPayload; // ivar: _apsPayload
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSArray *jaliscoChangedMediaTypes;
@property (readonly, nonatomic) NSInteger jaliscoServerRevision;
@property (readonly, nonatomic) NSInteger moduleIdentifier;
@property (readonly, nonatomic) NSInteger sagaServerRevision;
@property (readonly, copy, nonatomic) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithMessageUserInfo:(id)arg0 ;


@end


#endif