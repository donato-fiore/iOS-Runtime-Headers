// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYHITTESTRESULT_H
#define PXSTORYHITTESTRESULT_H



#import "PXFeedHitTestResult.h"

@interface PXStoryHitTestResult : PXFeedHitTestResult

@property (readonly, nonatomic) NSInteger clipIdentifier; // ivar: _clipIdentifier


-(id)clipIdentifier:(NSInteger)arg0 ;
-(id)initWithSpriteIndex:(unsigned int)arg0 layout:(id)arg1 identifier:(id)arg2 ;


@end


#endif