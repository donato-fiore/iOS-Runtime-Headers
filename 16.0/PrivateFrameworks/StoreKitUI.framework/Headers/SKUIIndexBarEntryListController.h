// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIINDEXBARENTRYLISTCONTROLLER_H
#define SKUIINDEXBARENTRYLISTCONTROLLER_H

@class NSString;
@protocol SKUIIndexBarEntryListControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIViewElement.h"

@interface SKUIIndexBarEntryListController : NSObject

@property (weak, nonatomic) NSObject<SKUIIndexBarEntryListControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hidesIndexBar; // ivar: _hidesIndexBar
@property (readonly, nonatomic) BOOL needsRootTargetViewElement; // ivar: _needsRootTargetViewElement
@property (readonly, nonatomic) NSInteger numberOfEntryDescriptors; // ivar: _numberOfEntryDescriptors
@property (readonly, nonatomic) NSString *rootTargetIndexBarEntryID; // ivar: _rootTargetIndexBarEntryID
@property (retain, nonatomic) SKUIViewElement *rootTargetViewElement; // ivar: _rootTargetViewElement


+(id)entryListControllerForEntryListViewElement:(id)arg0 ;
+(id)entryListControllerForEntryViewElement:(id)arg0 ;
-(id)entryDescriptorAtIndex:(NSInteger)arg0 ;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(NSInteger)arg0 returningRelativeSectionIndex:(*NSInteger)arg1 ;
-(void)_didInvalidate;
-(void)reloadViewElementData;


@end


#endif