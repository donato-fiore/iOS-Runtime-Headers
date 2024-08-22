// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDHITTESTRESULT_H
#define PXFEEDHITTESTRESULT_H



#import "PXGHitTestResult.h"
#import "PXSectionedObjectReference.h"

@interface PXFeedHitTestResult : PXGHitTestResult

@property (nonatomic) PXSimpleIndexPath dataSourceIndexPath; // ivar: _dataSourceIndexPath
@property (readonly, nonatomic) id *hoverAction; // ivar: _hoverAction
@property (readonly, nonatomic) PXSectionedObjectReference *objectReference; // ivar: _objectReference
@property (readonly, nonatomic) id *presentMenuAction; // ivar: _presentMenuAction
@property (readonly, nonatomic) id *primaryAction; // ivar: _primaryAction
@property (readonly, nonatomic) id *touchAction; // ivar: _touchAction


-(id)hoverAction:(id)arg0 ;
-(id)initWithSpriteIndex:(unsigned int)arg0 layout:(id)arg1 ;
-(id)initWithSpriteIndex:(unsigned int)arg0 layout:(id)arg1 identifier:(id)arg2 ;
-(id)objectReference:(id)arg0 ;
-(id)presentMenuAction:(id)arg0 ;
-(id)primaryAction:(id)arg0 ;
-(id)touchAction:(id)arg0 ;


@end


#endif