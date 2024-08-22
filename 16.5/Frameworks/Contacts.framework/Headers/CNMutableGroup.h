// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMUTABLEGROUP_H
#define CNMUTABLEGROUP_H

@class NSDate, NSString, NSData;


#import "CNGroup.h"

@interface CNMutableGroup : CNGroup

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalURI;
@property (copy, nonatomic) NSString *externalUUID;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CNGroup *snapshot;


-(id)copy;
-(id)freeze;
-(id)freezeWithSelfAsSnapshot;
-(void)adoptValuesFromAndSetSnapshot:(id)arg0 ;


@end


#endif