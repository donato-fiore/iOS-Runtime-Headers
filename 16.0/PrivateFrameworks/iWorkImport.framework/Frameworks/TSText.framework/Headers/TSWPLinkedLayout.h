// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLINKEDLAYOUT_H
#define TSWPLINKEDLAYOUT_H



#import "TSWPLayout.h"
#import "TSWPLayoutManager.h"

@interface TSWPLinkedLayout : TSWPLayout

@property (retain, nonatomic) TSWPLayoutManager *layoutManager;
@property (nonatomic) BOOL textLayoutValid;


-(BOOL)descendersCannotClip;
-(BOOL)discardLayoutsForDrawableAttachmentsInRange:(struct _NSRange )arg0 ;
-(BOOL)isLastTarget;
-(BOOL)isLinked;
-(BOOL)isOverflowing;
-(BOOL)repShouldPreventCaret;
-(id)nextTargetFirstColumn;
-(id)previousTargetLastColumn;
-(void)i_validateTextLayout;
-(void)killDrawableLayouts:(id)arg0 ;
-(void)validate;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;
-(void)wrappableChildInvalidated:(id)arg0 ;


@end


#endif