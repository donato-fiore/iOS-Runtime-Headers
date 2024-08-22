// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCATALOG_H
#define PKCATALOG_H

@class NSMutableArray, NSDate;
@protocol NSCopying, NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding>



@property (retain, nonatomic) NSMutableArray *groups; // ivar: _groups
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)catalogWithContentsOfURL:(id)arg0 nonUbiquitousCatalogURL:(id)arg1 ;
+(id)catalogWithContentsOfURL:(id)arg0 nonUbiquitousCatalogURL:(id)arg1 directoryCoordinator:(id)arg2 ;
+(id)catalogWithLocalCatalog:(id)arg0 ubiquitousCatalog:(id)arg1 ;
+(id)recordNamePrefix;
-(BOOL)isEquivalentToCatalog:(id)arg0 ;
-(BOOL)isNewerThanCatalog:(id)arg0 ;
-(NSUInteger)itemType;
-(id)allGroupIDs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)shuffle:(int)arg0 ;
-(void)writeToURL:(id)arg0 nonUbiquitousCatalogURL:(id)arg1 atomically:(BOOL)arg2 ;


@end


#endif