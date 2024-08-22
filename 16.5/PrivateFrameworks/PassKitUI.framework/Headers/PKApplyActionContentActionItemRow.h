// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYACTIONCONTENTACTIONITEMROW_H
#define PKAPPLYACTIONCONTENTACTIONITEMROW_H

@class PKApplyActionContentActionItem, NSString;
@protocol PKApplyCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKApplyActionContentActionItemRow : NSObject <PKApplyCollectionViewRow>

 {
    PKApplyActionContentActionItem *_actionItem;
    id *_selectionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithApplyActionContentActionItem:(id)arg0 selectionHandler:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif