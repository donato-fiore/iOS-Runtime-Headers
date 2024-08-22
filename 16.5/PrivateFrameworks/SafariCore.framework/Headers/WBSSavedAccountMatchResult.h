// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNTMATCHRESULT_H
#define WBSSAVEDACCOUNTMATCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSPasskeyAutoFillFromNearbyDeviceOptions.h"

@interface WBSSavedAccountMatchResult : NSObject

@property (readonly, copy, nonatomic) NSArray *associatedDomainMatches; // ivar: _associatedDomainMatches
@property (readonly, copy, nonatomic) NSArray *exactMatches; // ivar: _exactMatches
@property (readonly, copy, nonatomic) WBSPasskeyAutoFillFromNearbyDeviceOptions *nearbyDeviceOptions; // ivar: _nearbyDeviceOptions
@property (readonly, copy, nonatomic) NSArray *potentialMatches; // ivar: _potentialMatches


-(id)debugDescription;
-(id)initWithExactMatches:(id)arg0 potentialMatches:(id)arg1 associatedDomainMatches:(id)arg2 nearbyDeviceOptions:(id)arg3 ;
-(id)matchesForPasswordAutoFill;
-(id)orderedMatches;


@end


#endif