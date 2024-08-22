// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPOLICY_H
#define TPPOLICY_H

@class NSDictionary, NSSet, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPPolicyVersion.h"

@interface TPPolicy : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *categoriesByView; // ivar: _categoriesByView
@property (retain, nonatomic) NSSet *inheritedExcludedViews; // ivar: _inheritedExcludedViews
@property (retain, nonatomic) NSDictionary *introducersByCategory; // ivar: _introducersByCategory
@property (retain, nonatomic) NSArray *keyViewMapping; // ivar: _keyViewMapping
@property (retain, nonatomic) NSArray *modelToCategory; // ivar: _modelToCategory
@property (retain, nonatomic) NSSet *piggybackViews; // ivar: _piggybackViews
@property (retain, nonatomic) NSSet *priorityViews; // ivar: _priorityViews
@property BOOL unknownRedactions; // ivar: _unknownRedactions
@property (retain, nonatomic) NSSet *userControllableViewList; // ivar: _userControllableViewList
@property (retain, nonatomic) TPPolicyVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)policyWithModelToCategory:(id)arg0 categoriesByView:(id)arg1 introducersByCategory:(id)arg2 keyViewMapping:(id)arg3 unknownRedactions:(BOOL)arg4 userControllableViewList:(id)arg5 piggybackViews:(id)arg6 priorityViews:(id)arg7 inheritedExcludedViews:(id)arg8 version:(id)arg9 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPolicy:(id)arg0 ;
-(BOOL)peerInCategory:(id)arg0 canAccessView:(id)arg1 ;
-(BOOL)trustedPeerInCategory:(id)arg0 canIntroduceCategory:(id)arg1 ;
-(id)categoryForModel:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)syncingPolicyForModel:(id)arg0 syncUserControllableViews:(int)arg1 isInheritedAccount:(BOOL)arg2 error:(*id)arg3 ;
-(id)viewsForModel:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif