// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMRMETADATADATASOURCE_H
#define MRUMRMETADATADATASOURCE_H

@class NSString, MRNowPlayingPlayerResponse;
@protocol MRUEndpointControllerObserver, MPArtworkCacheReference, _MCStateDumpPropertyListTransformable, MRUMetadataDataSource, MRUMetadataDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "MRUArtwork.h"
#import "MRUEndpointController.h"
#import "MRUNowPlayingInfo.h"
#import "MRUTimeControls.h"
#import "MRUTransportControls.h"

@interface MRUMRMetadataDataSource : NSObject <MRUEndpointControllerObserver, MPArtworkCacheReference, _MCStateDumpPropertyListTransformable, MRUMetadataDataSource>



@property (readonly, nonatomic) MRUArtwork *artwork; // ivar: _artwork
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUMetadataDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MRUEndpointController *endpointController; // ivar: _endpointController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo; // ivar: _nowPlayingInfo
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response; // ivar: _response
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;
@property (readonly, nonatomic) MRUTimeControls *timeControls; // ivar: _timeControls
@property (readonly, nonatomic) MRUTransportControls *transportControls; // ivar: _transportControls


-(id)_stateDumpObject;
-(id)init;
-(id)initWithEndpointController:(id)arg0 response:(id)arg1 ;
-(id)placeholder;
-(id)placeholderSymbolName;
-(void)dealloc;
-(void)endpointController:(id)arg0 didChangeRoute:(id)arg1 ;
-(void)endpointController:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)updateArtwork;
-(void)updateArtworkWithResponse:(id)arg0 ;
-(void)updateBundleIDWithResponse:(id)arg0 ;
-(void)updateData;
-(void)updateNowPlayingInfoWithResponse:(id)arg0 ;


@end


#endif