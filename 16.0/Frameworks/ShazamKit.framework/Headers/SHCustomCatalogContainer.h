// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCUSTOMCATALOGCONTAINER_H
#define SHCUSTOMCATALOGCONTAINER_H

@class NSData, NSArray;
@protocol SHCustomCatalogStorage;

#import <Foundation/Foundation.h>

#import "SHJSONLCustomCatalogTransformer.h"

@interface SHCustomCatalogContainer : NSObject

@property (readonly, nonatomic) NSObject<SHCustomCatalogStorage> *container; // ivar: _container
@property (readonly, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) NSArray *referenceSignatures;
@property (readonly, nonatomic) SHJSONLCustomCatalogTransformer *transformer; // ivar: _transformer


+(id)customCatalogURLFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)mediaItemsForReferenceSignature:(id)arg0 ;
-(id)referenceSignatureForTrackID:(NSUInteger)arg0 ;
-(void)addSignature:(id)arg0 representingMediaItems:(id)arg1 ;


@end


#endif