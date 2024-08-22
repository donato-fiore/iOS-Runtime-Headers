// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLOCALLYAVAILABLERESOURCEBAG_H
#define PHLOCALLYAVAILABLERESOURCEBAG_H

@class NSString;
@protocol PHRecyclableObject, NSCopying, PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;

#import <Foundation/Foundation.h>


@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying>



@property (retain, nonatomic) NSObject<PLAssetID> *assetID; // ivar: _assetID
@property (retain, nonatomic) NSObject<PLResourceDataStore> *dataStore; // ivar: _dataStore
@property (retain, nonatomic) NSObject<PLResourceDataStoreKey> *dataStoreKey; // ivar: _dataStoreKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDegraded; // ivar: _isDegraded
@property (nonatomic) BOOL isPrimaryFormat; // ivar: _isPrimaryFormat
@property (nonatomic) BOOL keyIsHintBased; // ivar: _keyIsHintBased
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)resourceData;
-(id)resourceURL;
-(void)prepareForReuse;


@end


#endif