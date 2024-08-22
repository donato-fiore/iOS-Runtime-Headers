// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUINAVIGATIONLISTSTYLEAPPLIER_H
#define CNUINAVIGATIONLISTSTYLEAPPLIER_H

@protocol CNUINavigationListStyle;

#import <Foundation/Foundation.h>


@interface CNUINavigationListStyleApplier : NSObject

@property (readonly, nonatomic) NSObject<CNUINavigationListStyle> *navigationListStyle; // ivar: _navigationListStyle


-(id)initWithNavigationListStyle:(id)arg0 ;
-(void)applyCollapsedBackgroundNavigationListStyleToCell:(id)arg0 ;
-(void)applyExpandedBackgroundNavigationListStyleToCell:(id)arg0 ;
-(void)applyNavigationListStyleToCell:(id)arg0 ;
-(void)applyNavigationListStyleToDetailCell:(id)arg0 ;


@end


#endif