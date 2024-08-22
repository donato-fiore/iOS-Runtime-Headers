// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSERVICETREECOMPOUNDPREDICATE_H
#define HFSERVICETREECOMPOUNDPREDICATE_H

@class NSArray, NSString;
@protocol HFServiceTreeMatching;

#import <Foundation/Foundation.h>


@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching>



@property (readonly, copy, nonatomic) NSArray *childServicePredicates; // ivar: _childServicePredicates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFServiceTreeMatching> *rootServicePredicate; // ivar: _rootServicePredicate
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRootServicePredicate:(id)arg0 childServicePredicates:(id)arg1 ;
-(id)matchingServicesForRootService:(id)arg0 ;


@end


#endif