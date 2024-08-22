// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXHORIZONTALCOLLECTIONGADGETPROVIDER_H
#define PXHORIZONTALCOLLECTIONGADGETPROVIDER_H

@class NSDictionary, NSString;
@protocol PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate;


#import "PXGadgetProvider.h"
#import "PXHorizontalCollectionGadget.h"

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate>

 {
    PXHorizontalCollectionGadget *_horizontalGadget;
    BOOL _hasLoaded;
    Class _horizontalCollectionGadgetClass;
}


@property (copy, nonatomic) NSDictionary *columnSpanForTraitCollection; // ivar: _columnSpanForTraitCollection
@property (readonly, nonatomic) PXGadgetProvider *contentGadgetProvider; // ivar: _contentGadgetProvider
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultColumnSpan; // ivar: _defaultColumnSpan
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger gadgetType; // ivar: _gadgetType
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger headerStyle; // ivar: _headerStyle
@property (nonatomic) BOOL isFixedHeight; // ivar: _isFixedHeight
@property (nonatomic) BOOL prefersPagingEnabled; // ivar: _prefersPagingEnabled
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(NSUInteger)estimatedNumberOfGadgets;
-(id)_createHorizontalGadget;
-(id)init;
-(id)initWithContentGadgetProvider:(id)arg0 title:(id)arg1 ;
-(id)initWithContentGadgetProvider:(id)arg0 title:(id)arg1 horizontalCollectionGadgetClass:(Class)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 contentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3 ;
-(void)_updateHorizontalGadget;
-(void)generateGadgets;
-(void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg0 ;
-(void)invalidateGadgets;
-(void)loadDataForGadgets;
-(void)loadDataForPriority;
-(void)resetPriorityDate;


@end


#endif