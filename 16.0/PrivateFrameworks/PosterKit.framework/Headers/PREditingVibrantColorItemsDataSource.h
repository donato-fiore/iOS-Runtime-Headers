// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGVIBRANTCOLORITEMSDATASOURCE_H
#define PREDITINGVIBRANTCOLORITEMSDATASOURCE_H

@class NSString, NSArray;
@protocol PREditingColorItemsDataSource;

#import <Foundation/Foundation.h>

#import "PREditorColorPickerConfiguration.h"
#import "PREditingColorVariationStore.h"

@interface PREditingVibrantColorItemsDataSource : NSObject <PREditingColorItemsDataSource>



@property (retain, nonatomic) PREditorColorPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;
@property (retain, nonatomic) PREditingColorVariationStore *variationStore; // ivar: _variationStore


-(NSUInteger)indexForItem:(id)arg0 ;
-(NSUInteger)numberOfItems;
-(id)colorItemForIndex:(NSUInteger)arg0 ;
-(id)firstColorItemPassingTest:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 variationStore:(id)arg1 ;
-(void)buildItems;


@end


#endif