// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPARTWORKCATALOGSTATICDATASOURCE_H
#define _MPARTWORKCATALOGSTATICDATASOURCE_H

@class NSString;
@protocol MPArtworkDataSource;

#import <Foundation/Foundation.h>


@interface _MPArtworkCatalogStaticDataSource : NSObject <MPArtworkDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDataSource;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)areRepresentationsOfKind:(NSInteger)arg0 availableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)existingRepresentationOfKind:(NSInteger)arg0 forArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadRepresentationOfKind:(NSInteger)arg0 forArtworkCatalog:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif