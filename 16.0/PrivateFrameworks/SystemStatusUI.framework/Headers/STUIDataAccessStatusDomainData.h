// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUIDATAACCESSSTATUSDOMAINDATA_H
#define STUIDATAACCESSSTATUSDOMAINDATA_H

@class NSSet, STListData, NSArray, NSString;
@protocol STStatusDomainData;

#import <Foundation/Foundation.h>

#import "STUIDataAccessStatusDomainData.h"

@interface STUIDataAccessStatusDomainData : NSObject <STStatusDomainData>



@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *activeAttributionData;
@property (readonly, copy, nonatomic) NSSet *attributedEntities;
@property (readonly, copy, nonatomic) STListData *attributionListData; // ivar: _attributionListData
@property (readonly, copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *executableIdentities;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *recentAttributionData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithAttributionListData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataWithAccessType:(NSUInteger)arg0 ;
-(id)dataWithAttributedEntity:(id)arg0 ;
-(id)dataWithEntitiesThatAreSystemServices:(BOOL)arg0 ;
-(id)dataWithExecutableIdentity:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithAttributionListData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif