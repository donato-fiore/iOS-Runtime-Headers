// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYHITTESTRESULT_H
#define PXSTORYHITTESTRESULT_H



#import "PXGHitTestResult.h"

@interface PXStoryHitTestResult : PXGHitTestResult

@property (readonly, nonatomic) NSInteger clipIdentifier; // ivar: _clipIdentifier
@property (readonly, nonatomic) id *primaryAction; // ivar: _primaryAction
@property (readonly, nonatomic) id *touchAction; // ivar: _touchAction


-(id)clipIdentifier:(NSInteger)arg0 ;
-(id)initWithSpriteIndex:(unsigned int)arg0 layout:(id)arg1 ;
-(id)primaryAction:(id)arg0 ;
-(id)touchAction:(id)arg0 ;


@end


#endif