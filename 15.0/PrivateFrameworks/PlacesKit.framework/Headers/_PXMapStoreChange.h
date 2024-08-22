// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXMAPSTORECHANGE_H
#define _PXMAPSTORECHANGE_H

@class NSSet, NSString;
@protocol PXPlacesGeotaggedItemDataSourceChange;

#import <Foundation/Foundation.h>


@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange>



@property (retain) NSSet *addedItems; // ivar: _addedItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSSet *removedItems; // ivar: _removedItems
@property (readonly) Class superclass;
@property (retain) NSSet *updatedItems; // ivar: _updatedItems


-(BOOL)hasChanges;
-(id)initWithAddedItems:(id)arg0 removedItems:(id)arg1 updatedItems:(id)arg2 ;
-(void)dealloc;
-(void)updateWithChange:(id)arg0 ;


@end


#endif