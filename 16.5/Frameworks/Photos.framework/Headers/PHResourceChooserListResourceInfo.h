// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHRESOURCECHOOSERLISTRESOURCEINFO_H
#define PHRESOURCECHOOSERLISTRESOURCEINFO_H

@class NSString;
@protocol PHRecyclableObject, NSCopying, PLResourceIdentity, PLResourceDataStoreKey, PLResourceDataStore;

#import <Foundation/Foundation.h>


@interface PHResourceChooserListResourceInfo : NSObject <PHRecyclableObject, NSCopying>



@property (readonly, nonatomic) CGSize approximateSize; // ivar: _approximateSize
@property (readonly, nonatomic) BOOL canDownload; // ivar: _canDownload
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PLResourceIdentity> *identity; // ivar: _identity
@property (readonly, nonatomic) BOOL isDerivative; // ivar: _isDerivative
@property (readonly, nonatomic) BOOL isPrimaryFormat; // ivar: _isPrimaryFormat
@property (readonly, nonatomic) NSObject<PLResourceDataStoreKey> *key; // ivar: _key
@property (readonly, nonatomic) short localAvailabilityTarget; // ivar: _localAvailabilityTarget
@property (nonatomic) BOOL locallyGeneratableOnDemand; // ivar: _locallyGeneratableOnDemand
@property (readonly, nonatomic) unsigned int recipeID; // ivar: _recipeID
@property (readonly, nonatomic) float resourceScale; // ivar: _resourceScale
@property (readonly, nonatomic) unsigned int resourceType; // ivar: _resourceType
@property (readonly, nonatomic) unsigned int resourceVersion; // ivar: _resourceVersion
@property (readonly, nonatomic) NSObject<PLResourceDataStore> *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResourceType:(unsigned int)arg0 recipeID:(unsigned int)arg1 resourceVersion:(unsigned int)arg2 approximateSize:(struct CGSize )arg3 resourceScale:(CGFloat)arg4 isDerivative:(BOOL)arg5 isPrimaryFormat:(BOOL)arg6 canDownload:(BOOL)arg7 locallyGeneratableOnDemand:(BOOL)arg8 store:(id)arg9 key:(id)arg10 identity:(id)arg11 localAvailabilityTarget:(short)arg12 ;
-(void)populateWithResourceType:(unsigned int)arg0 recipeID:(unsigned int)arg1 resourceVersion:(unsigned int)arg2 approximateSize:(struct CGSize )arg3 resourceScale:(CGFloat)arg4 isDerivative:(BOOL)arg5 isPrimaryFormat:(BOOL)arg6 canDownload:(BOOL)arg7 locallyGeneratableOnDemand:(BOOL)arg8 store:(id)arg9 key:(id)arg10 identity:(id)arg11 localAvailabilityTarget:(short)arg12 ;
-(void)prepareForReuse;


@end


#endif