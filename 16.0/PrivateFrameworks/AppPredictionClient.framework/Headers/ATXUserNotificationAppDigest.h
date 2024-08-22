// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSERNOTIFICATIONAPPDIGEST_H
#define ATXUSERNOTIFICATIONAPPDIGEST_H

@class NSArray, NSString;
@protocol ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXUserNotificationAppDigest : NSObject <ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (readonly, nonatomic) NSArray *appMarqueeGroups; // ivar: _appMarqueeGroups
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) NSArray *nonAppMarqueeGroups; // ivar: _nonAppMarqueeGroups


-(id)encodeAsProto;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithBundleId:(id)arg0 appMarqueeGroups:(id)arg1 nonAppMarqueeGroups:(id)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)proto;


@end


#endif