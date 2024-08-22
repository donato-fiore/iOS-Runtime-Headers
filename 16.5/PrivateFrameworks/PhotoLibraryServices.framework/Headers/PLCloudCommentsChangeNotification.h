// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDCOMMENTSCHANGENOTIFICATION_H
#define PLCLOUDCOMMENTSCHANGENOTIFICATION_H

@class NSDictionary;


#import "PLContainerChangeNotification.h"
#import "PLManagedAsset.h"

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) PLManagedAsset *asset;


+(id)notificationWithAsset:(id)arg0 snapshot:(id)arg1 ;
-(id)_contentRelationshipName;
-(id)description;
-(id)name;
-(id)userInfo;


@end


#endif