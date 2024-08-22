// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIINDEXBARSINGLEENTRYLISTCONTROLLER_H
#define SKUIINDEXBARSINGLEENTRYLISTCONTROLLER_H



#import "SKUIIndexBarEntryListController.h"
#import "SKUIIndexBarEntryDescriptor.h"
#import "SKUIViewElement.h"
#import "SKUIIndexBarEntryViewElement.h"

@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryDescriptor *_entryDescriptor;
    SKUIViewElement *_descriptiveViewElement;
}


@property (readonly, nonatomic) SKUIIndexBarEntryViewElement *entryViewElement; // ivar: _entryViewElement


-(BOOL)hidesIndexBar;
-(BOOL)needsRootTargetViewElement;
-(NSInteger)numberOfEntryDescriptors;
-(id)entryDescriptorAtIndex:(NSInteger)arg0 ;
-(id)initWithEntryViewElement:(id)arg0 ;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(NSInteger)arg0 returningRelativeSectionIndex:(*NSInteger)arg1 ;
-(void)reloadViewElementData;


@end


#endif