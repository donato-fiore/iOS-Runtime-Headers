// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYPROFILEGROUP_H
#define HFACCESSORYPROFILEGROUP_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface HFAccessoryProfileGroup : NSObject

@property (readonly, copy, nonatomic) NSNumber *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, copy, nonatomic) NSArray *profiles; // ivar: _profiles


+(id)_groupIdentifierForProfile:(id)arg0 options:(id)arg1 ;
+(id)_groupProfilesKeyedByIdentifier:(id)arg0 options:(id)arg1 ;
+(id)_hashCombiningHashes:(id)arg0 ;
+(id)groupProfiles:(id)arg0 options:(id)arg1 ;
-(id)initWithProfiles:(id)arg0 groupIdentifier:(id)arg1 ;


@end


#endif