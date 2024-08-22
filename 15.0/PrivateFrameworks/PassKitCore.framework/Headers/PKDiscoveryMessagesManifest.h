// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYMESSAGESMANIFEST_H
#define PKDISCOVERYMESSAGESMANIFEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKDiscoveryMessagesManifest : NSObject

@property (readonly, nonatomic) NSArray *engagementMessages; // ivar: _engagementMessages
@property (readonly, nonatomic) NSArray *notifications; // ivar: _notifications
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(id)initWithDictionary:(id)arg0 ;


@end


#endif