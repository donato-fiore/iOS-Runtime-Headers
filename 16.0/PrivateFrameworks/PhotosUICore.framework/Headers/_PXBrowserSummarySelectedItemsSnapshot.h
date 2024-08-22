// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXBROWSERSUMMARYSELECTEDITEMSSNAPSHOT_H
#define _PXBROWSERSUMMARYSELECTEDITEMSSNAPSHOT_H

@protocol PXSelectedItemsSnapshot, PXBrowserSelectionSnapshot;

#import <Foundation/Foundation.h>


@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot>



@property (readonly, nonatomic) NSObject<PXBrowserSelectionSnapshot> *browserSelectionSnapshot; // ivar: _browserSelectionSnapshot
@property (readonly, nonatomic) NSInteger count;


-(id)containsItemReference:(id)arg0 ;
-(id)init;
-(id)initWithBrowserSelectionSnapshot:(id)arg0 ;
-(id)itemForItemReference:(id)arg0 ;
-(id)itemReferenceAtIndex:(NSInteger)arg0 ;


@end


#endif