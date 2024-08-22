// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMUTABLECONTAINER_H
#define CNMUTABLECONTAINER_H

@class NSString, NSData, NSDate;


#import "CNContainer.h"

@interface CNMutableContainer : CNContainer

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *constraintsPath;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSData *externalSyncData;
@property (copy, nonatomic) NSString *externalSyncTag;
@property (nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSString *meIdentifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSUInteger restrictions;
@property (copy, nonatomic) CNContainer *snapshot;
@property (nonatomic) NSInteger type;


-(id)copy;
-(id)freeze;
-(id)freezeWithSelfAsSnapshot;
-(void)adoptValuesFromAndSetSnapshot:(id)arg0 ;


@end


#endif