// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPLAYOUT_H
#define PXPLACESMAPLAYOUT_H

@class NSString;
@protocol PXPlacesMapLayout, PXPlacesGeotaggedItemDataSource, PXPlacesMapPipelineComponentProvider;

#import <Foundation/Foundation.h>


@interface PXPlacesMapLayout : NSObject <PXPlacesMapLayout>



@property (readonly) NSObject<PXPlacesGeotaggedItemDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider; // ivar: pipelineComponentProvider
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 ;
-(id)layoutForViewPort:(id)arg0 andDataSourceChange:(id)arg1 ;
-(id)layoutItemForGeotaggable:(id)arg0 ;
-(void)reset;


@end


#endif