// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTPASTECOORDINATOR_H
#define UITEXTPASTECOORDINATOR_H

@class NSMutableArray;
@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface UITextPasteCoordinator : NSObject {
    NSMutableArray *_items;
    NSObject<OS_dispatch_group> *_wait;
}


@property (readonly, weak, nonatomic) NSObject<UITextPasteCoordinatorDelegate> *delegate; // ivar: _delegate


-(BOOL)performBlockingWait:(CGFloat)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_determineFinished;
-(void)_finish;
-(void)addItem:(id)arg0 ;
-(void)setResult:(id)arg0 forItem:(id)arg1 ;


@end


#endif