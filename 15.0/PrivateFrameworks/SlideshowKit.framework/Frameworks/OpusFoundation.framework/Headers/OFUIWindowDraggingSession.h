// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFUIWINDOWDRAGGINGSESSION_H
#define OFUIWINDOWDRAGGINGSESSION_H

@class UIView, UILabel, NSMutableDictionary, NSMutableArray, UIPasteboard;
@protocol OFUIWindowDraggingDestination, OFUIWindowDraggingSource;

#import <Foundation/Foundation.h>

#import "OFUIWindow.h"

@interface OFUIWindowDraggingSession : NSObject {
    UIView *_badgeView;
    UILabel *_badgeLabel;
    NSMutableDictionary *_pasteboardCache;
}


@property (nonatomic) NSUInteger animation; // ivar: _animation
@property (nonatomic) BOOL delayUpdates; // ivar: _delayUpdates
@property (retain, nonatomic) NSObject<OFUIWindowDraggingDestination> *destination; // ivar: _destination
@property (nonatomic) NSUInteger destinationOperation; // ivar: _destinationOperation
@property (nonatomic) NSUInteger formation; // ivar: _formation
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) UIPasteboard *pasteboard; // ivar: _pasteboard
@property (nonatomic) CGPoint position; // ivar: _position
@property (retain, nonatomic) UIView *presentationView; // ivar: _presentationView
@property (nonatomic) CGSize presentationViewSize; // ivar: _presentationViewSize
@property (nonatomic) BOOL showBadge; // ivar: _showBadge
@property (retain, nonatomic) NSObject<OFUIWindowDraggingSource> *source; // ivar: _source
@property (nonatomic) NSUInteger sourceOperation; // ivar: _sourceOperation
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) OFUIWindow *window; // ivar: _window


-(BOOL)isDragging;
-(BOOL)itemsContainObject:(id)arg0 ;
-(NSUInteger)indexOfItem:(id)arg0 ;
-(NSUInteger)numberOfItems;
-(id)_hitDestinationInSuperview:(id)arg0 ;
-(id)_hitDestinationInView:(id)arg0 ;
-(id)init;
-(id)initWithWindow:(id)arg0 items:(id)arg1 position:(struct CGPoint )arg2 source:(id)arg3 ;
// -(id)objectsForPasteboardType:(id)arg0 transcodeBlock:(id)arg1 cache:(unk)arg2  ;
-(void)_finishPresentationViewWithCompletion:(id)arg0 ;
-(void)_updateBadge;
-(void)_updateDraggingInSameWindow;
-(void)_updatePresentationViewWithCompletion:(id)arg0 ;
-(void)_updateView:(id)arg0 orientation:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)addItem:(id)arg0 ;
-(void)beginDragging;
-(void)dealloc;
-(void)endDragging:(BOOL)arg0 ;
-(void)moveToPosition:(struct CGPoint )arg0 ;
-(void)updateDragging;
-(void)updatePresentationViewOrientation:(id)arg0 ;


@end


#endif