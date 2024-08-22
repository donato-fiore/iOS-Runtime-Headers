// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUACTIONITEMCELLMODEL_H
#define MUACTIONITEMCELLMODEL_H

@class MKPlaceCardActionItem, NSString;
@protocol MUDynamicButtonCellModel, MUDynamicButtonCellModelChangeDelegate;

#import <Foundation/Foundation.h>


@interface MUActionItemCellModel : NSObject <MUDynamicButtonCellModel>

 {
    MKPlaceCardActionItem *_actionItem;
}


@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) NSInteger actionStyle;
@property (weak, nonatomic) NSObject<MUDynamicButtonCellModelChangeDelegate> *changeDelegate; // ivar: _changeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;


-(id)_resolvedActionItem;
-(id)initWithActionItem:(id)arg0 ;
-(void)_registerObserver;
-(void)dealloc;
-(void)loadSubtitleWithCompletion:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif