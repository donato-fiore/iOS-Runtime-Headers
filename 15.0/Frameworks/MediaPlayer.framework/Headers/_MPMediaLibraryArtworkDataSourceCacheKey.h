// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPMEDIALIBRARYARTWORKDATASOURCECACHEKEY_H
#define _MPMEDIALIBRARYARTWORKDATASOURCECACHEKEY_H


#import <Foundation/Foundation.h>


@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject

@property (copy, nonatomic) id *catalogIdentifier; // ivar: _catalogIdentifier
@property (nonatomic) CGSize representationSize; // ivar: _representationSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithArtworkCatalog:(id)arg0 representativeSize:(struct CGSize )arg1 ;


@end


#endif