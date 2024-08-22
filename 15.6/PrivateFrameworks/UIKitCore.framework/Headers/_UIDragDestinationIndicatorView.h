// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGDESTINATIONINDICATORVIEW_H
#define _UIDRAGDESTINATIONINDICATORVIEW_H

@class NSIndexPath;


#import "UIView.h"

@interface _UIDragDestinationIndicatorView : UIView

@property (retain, nonatomic) NSIndexPath *currentIndexPath; // ivar: _currentIndexPath
@property (nonatomic) BOOL isSourceList; // ivar: _isSourceList
@property (readonly, nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor


-(id)initWithSourceListStyle:(BOOL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)positionHorizontallyCenteredInFrame:(struct CGRect )arg0 ;
-(void)positionOnCellFrame:(struct CGRect )arg0 above:(BOOL)arg1 ;
-(void)positionVerticallyCenteredInFrame:(struct CGRect )arg0 ;


@end


#endif