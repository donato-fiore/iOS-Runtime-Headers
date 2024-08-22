// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORELIBRARYPERSONALIZATIONREQUEST_H
#define MPSTORELIBRARYPERSONALIZATIONREQUEST_H

@class NSMutableDictionary, NSString, NSDictionary, ICUserIdentity;
@protocol MPUserIdentityConsuming;


#import "MPModelRequest.h"
#import "MPSectionedCollection.h"

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest <MPUserIdentityConsuming>

 {
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (retain, nonatomic) MPSectionedCollection *representedObjects; // ivar: _representedObjects
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // ivar: _unpersonalizedContentDescriptors
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


+(BOOL)requiresNetwork;
+(BOOL)supportsSecureCoding;
+(id)libraryViewWithUserIdentity:(id)arg0 ;
+(id)personalizedResponseForContentDescriptor:(id)arg0 requestedProperties:(id)arg1 ;
+(id)preferredQueue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUnpersonalizedContentDescriptors:(id)arg0 ;
-(id)initWithUnpersonalizedRequest:(id)arg0 unpersonalizedContentDescriptors:(id)arg1 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(id)propertiesForItemAtIndexPath:(id)arg0 ;
-(void)setProperties:(id)arg0 forItemAtIndexPath:(id)arg1 ;


@end


#endif