// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSASSERTION_H
#define DDSASSERTION_H

@class NSString, NSSet, NSMutableSet, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "DDSAssetPolicy.h"
#import "DDSAssetQuery.h"

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_description;
}


@property (readonly, nonatomic) NSSet *assertionIdentifiers;
@property (readonly, nonatomic) NSSet *clientIdentifiers;
@property (retain, nonatomic) NSMutableSet *descriptors; // ivar: _descriptors
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly, nonatomic) DDSAssetPolicy *policy;
@property (readonly, nonatomic) DDSAssetQuery *query; // ivar: _query


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssertion:(id)arg0 ;
-(NSUInteger)hash;
-(id)assertionIDsForClientID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(void)addDescriptorWithAssertionID:(id)arg0 clientID:(id)arg1 policy:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateDescription;
-(void)removeDescriptorWithAssertionID:(id)arg0 ;
-(void)removeDescriptorWithClientID:(id)arg0 ;


@end


#endif