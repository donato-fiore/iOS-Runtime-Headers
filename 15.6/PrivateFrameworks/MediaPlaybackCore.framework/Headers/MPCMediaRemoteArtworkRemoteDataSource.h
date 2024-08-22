// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMEDIAREMOTEARTWORKREMOTEDATASOURCE_H
#define MPCMEDIAREMOTEARTWORKREMOTEDATASOURCE_H

@class NSString;
@protocol MPArtworkDataSource;

#import <Foundation/Foundation.h>

#import "MPCMediaRemoteController.h"

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource>



@property (readonly, weak, nonatomic) MPCMediaRemoteController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif