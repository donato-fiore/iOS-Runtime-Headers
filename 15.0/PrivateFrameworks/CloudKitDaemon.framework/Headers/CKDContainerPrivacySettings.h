// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDCONTAINERPRIVACYSETTINGS_H
#define CKDCONTAINERPRIVACYSETTINGS_H

@class NSSet, CKContainerID;

#import <Foundation/Foundation.h>


@interface CKDContainerPrivacySettings : NSObject

@property (copy, nonatomic) NSSet *applicationBundleIDs; // ivar: _applicationBundleIDs
@property (copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (nonatomic) NSInteger discoverable; // ivar: _discoverable


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)description;


@end


#endif