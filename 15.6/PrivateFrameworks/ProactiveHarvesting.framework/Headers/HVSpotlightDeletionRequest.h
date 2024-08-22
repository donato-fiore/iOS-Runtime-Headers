// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVSPOTLIGHTDELETIONREQUEST_H
#define HVSPOTLIGHTDELETIONREQUEST_H

@class NSString, _PASDomainSelection, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HVSpotlightDeletionRequest : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_bundleIdentifier;
    _PASDomainSelection *_domainSelection;
    NSSet *_uniqueIdentifiers;
    BOOL _isPurge;
}


@property (readonly, nonatomic) NSString *bundleIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 domainSelection:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 purgedUniqueIdentifiers:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)accessCriteriaUsingBundleIdentifierBlock:(id)arg0 domainSelectionBlock:(unk)arg1 incontrovertiblyDeletedUniqueIdentifiersBlock:(id)arg2 purgedUniqueIdentifiersBlock:(unk)arg3  ;
// -(void)accessCriteriaUsingBundleIdentifierBlock:(id)arg0 domainSelectionBlock:(unk)arg1 uniqueIdentifiersBlock:(id)arg2  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif