// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSELECTEDITEMSSTACK_H
#define PXSELECTEDITEMSSTACK_H

@class NSString, NSArray;
@protocol PXMutableSelectedItemsStack;


#import "PXObservable.h"

@interface PXSelectedItemsStack : PXObservable <PXMutableSelectedItemsStack>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger depth; // ivar: _depth
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *topItemReferences; // ivar: _topItemReferences
@property (copy, nonatomic) NSArray *topItems; // ivar: _topItems


-(id)init;
-(id)initWithDepth:(NSInteger)arg0 ;
-(id)mutableChangeObject;
-(void)performChanges:(id)arg0 ;
-(void)updateWithSelectedItemsSnapshot:(id)arg0 ;


@end


#endif