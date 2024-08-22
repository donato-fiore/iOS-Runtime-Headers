// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI25MONOGRAMARTWORKDATASOURCE_H
#define _TTC7MUSICUI25MONOGRAMARTWORKDATASOURCE_H

@protocol MPArtworkDataSource;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI25MonogramArtworkDataSource : NSObject <MPArtworkDataSource>

 {
    ? $__lazy_storage_$_monogramRenderer;
    ? rendererToken;
    ? cache;
}




-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)init;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif