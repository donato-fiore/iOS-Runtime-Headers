// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCUSTOMCATALOGMEMORYSTORAGE_H
#define SHCUSTOMCATALOGMEMORYSTORAGE_H

@class NSString, NSMutableDictionary, NSArray;
@protocol SHCustomCatalogStorage;

#import <Foundation/Foundation.h>


@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) NSArray *referenceSignatures; // ivar: _referenceSignatures
@property (retain, nonatomic) NSMutableDictionary *signatures; // ivar: _signatures
@property (readonly) Class superclass;


-(id)init;
-(id)jsonObjectRepresentationWithError:(*id)arg0 ;
-(id)mediaItemsForReferenceSignature:(id)arg0 ;
-(id)referenceSignatureForTrackID:(NSUInteger)arg0 ;
-(void)addSignature:(id)arg0 representingMediaItems:(id)arg1 ;
-(void)producedMediaItem:(id)arg0 forID:(id)arg1 ;
-(void)producedSignature:(id)arg0 forID:(id)arg1 ;


@end


#endif