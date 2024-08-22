// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIAENTITIESDATASOURCE_H
#define VUIMPMEDIAENTITIESDATASOURCE_H

@class NSString;
@protocol VUIMediaEntitiesFetchControllerDelegate;


#import "VUIMediaEntitiesDataSource.h"
#import "VUIMediaEntitiesFetchController.h"
#import "VUIMediaLibrary.h"

@interface VUIMPMediaEntitiesDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *fetchController; // ivar: _fetchController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (readonly) Class superclass;


-(id)_getPurchaseHistoryIdsFromMediaEntities:(id)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 fetchRequest:(id)arg1 ;
-(void)_loadImageUrlsByPurchaseHistoryIds:(id)arg0 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)startFetch;


@end


#endif