// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDODGINGTESTERVIEW_H
#define SBDODGINGTESTERVIEW_H

@class UIView, UIColor, NSString, NSMutableSet, UIPanGestureRecognizer, NSArray, UITableView, UILabel;
@protocol SBDodgingItemDelegate, UITableViewDelegate, UITableViewDataSource;


#import "SBDodgingResolverViewController.h"
#import "SBDodgingItem.h"

@interface SBDodgingTesterView : UIView <SBDodgingItemDelegate, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (weak, nonatomic) SBDodgingResolverViewController *controller; // ivar: _controller
@property (nonatomic) NSUInteger corner; // ivar: _corner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *ignoringItems; // ivar: _ignoringItems
@property (nonatomic) CGPoint initialMoveCenter; // ivar: _initialMoveCenter
@property (retain, nonatomic) SBDodgingItem *item; // ivar: _item
@property (retain, nonatomic) UIPanGestureRecognizer *moveGesture; // ivar: _moveGesture
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *otherIdentifiers; // ivar: _otherIdentifiers
@property (retain, nonatomic) UITableView *otherItemsTable; // ivar: _otherItemsTable
@property (nonatomic) CGPoint preferredCenter; // ivar: _preferredCenter
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (retain, nonatomic) UIPanGestureRecognizer *resizeGesture; // ivar: _resizeGesture
@property (retain, nonatomic) UIView *resizeView; // ivar: _resizeView
@property (retain, nonatomic) UILabel *resolvedValuesLabel; // ivar: _resolvedValuesLabel
@property (nonatomic) BOOL stashed; // ivar: _stashed
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)dodgingResolver:(id)arg0 preferenceForDodgingItem:(id)arg1 ;
-(id)initWithName:(id)arg0 color:(id)arg1 controller:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleChangeAnchorGesture:(id)arg0 ;
-(void)_handleDeleteGesture:(id)arg0 ;
-(void)_handleMoveGesture:(id)arg0 ;
-(void)_handleResizeGesture:(id)arg0 ;
-(void)_updateResolvedValuesLabel;
-(void)dodgingResolver:(id)arg0 dodgingItemDidChange:(id)arg1 ;
-(void)dodgingResolver:(id)arg0 dodgingItemDidSettle:(id)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif