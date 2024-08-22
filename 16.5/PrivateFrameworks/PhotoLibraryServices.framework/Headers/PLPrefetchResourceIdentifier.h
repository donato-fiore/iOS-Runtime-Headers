// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPREFETCHRESOURCEIDENTIFIER_H
#define PLPREFETCHRESOURCEIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLPrefetchResourceIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *assetUuid; // ivar: _assetUuid
@property (readonly, nonatomic) NSUInteger cplType; // ivar: _cplType
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(id)resourceDescriptionWithAssetUuid:(id)arg0 resourceVersion:(unsigned int)arg1 cplType:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssetUuid:(id)arg0 version:(unsigned int)arg1 cplType:(NSUInteger)arg2 ;


@end


#endif