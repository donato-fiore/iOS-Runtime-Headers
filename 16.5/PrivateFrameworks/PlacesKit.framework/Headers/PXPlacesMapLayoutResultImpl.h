// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACESMAPLAYOUTRESULTIMPL_H
#define PXPLACESMAPLAYOUTRESULTIMPL_H

@class NSString, NSMutableOrderedSet, NSOrderedSet;
@protocol PXPlacesMapLayoutResult;

#import <Foundation/Foundation.h>

#import "PXPlacesMapViewPort.h"

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *items; // ivar: _items
@property (readonly, nonatomic) NSOrderedSet *layoutItems;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXPlacesMapViewPort *viewPort; // ivar: _viewPort


-(id)init;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)removeItem:(id)arg0 ;


@end


#endif