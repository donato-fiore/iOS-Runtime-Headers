// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPHOMESHARINGARTWORKDATASOURCE_H
#define MPHOMESHARINGARTWORKDATASOURCE_H

@class NSString, HSHomeSharingLibrary;
@protocol MPArtworkDataSourceIdentifiable;


#import "MPAbstractNetworkArtworkDataSource.h"

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource <MPArtworkDataSourceIdentifiable>



@property (readonly, nonatomic) NSString *artworkDataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HSHomeSharingLibrary *library; // ivar: _library
@property (readonly) Class superclass;


+(id)artworkDataSourceShortDescription;
+(id)artworkDataSourceWithIdentifier:(id)arg0 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
-(id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)requestForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)supportedSizesForCatalog:(id)arg0 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif