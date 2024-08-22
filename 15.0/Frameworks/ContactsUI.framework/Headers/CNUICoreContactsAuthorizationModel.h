// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICORECONTACTSAUTHORIZATIONMODEL_H
#define CNUICORECONTACTSAUTHORIZATIONMODEL_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNUICoreContactsAuthorizationModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) NSArray *changedItems;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSArray *remoteItems;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)itemWithMatchingBundleIdentifier:(id)arg0 ;
-(id)modelByCopyingIconsOfRemoteItemsFromModel:(id)arg0 ;
-(id)modelByCopyingItemsWithBundleIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif