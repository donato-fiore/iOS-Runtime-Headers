// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICETREETYPEPREDICATE_H
#define HFSERVICETREETYPEPREDICATE_H

@class NSString, NSSet;
@protocol HFServiceTreeMatching;

#import <Foundation/Foundation.h>


@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeChildServices; // ivar: _includeChildServices
@property (readonly, copy, nonatomic) NSSet *serviceSubtypes; // ivar: _serviceSubtypes
@property (readonly, copy, nonatomic) NSSet *serviceTypes; // ivar: _serviceTypes
@property (readonly) Class superclass;


+(id)anyServiceTypePredicate;
+(id)anyServiceTypePredicateIncludingChildServices;
+(id)na_identity;
+(id)predicateWithServiceType:(id)arg0 ;
+(id)predicateWithServiceType:(id)arg0 includeChildServices:(BOOL)arg1 ;
-(BOOL)_matchesService:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithServiceTypes:(id)arg0 serviceSubtypes:(id)arg1 includeChildServices:(BOOL)arg2 ;
-(id)matchingServicesForRootService:(id)arg0 ;


@end


#endif