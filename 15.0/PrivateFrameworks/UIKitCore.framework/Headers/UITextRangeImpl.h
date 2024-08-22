// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTRANGEIMPL_H
#define UITEXTRANGEIMPL_H

@class DOMRange;


#import "UITextRange.h"

@interface UITextRangeImpl : UITextRange

@property (nonatomic) NSInteger affinity; // ivar: _affinityIfCollapsed
@property (retain, nonatomic) DOMRange *domRange; // ivar: _domRange


+(id)wrapDOMRange:(id)arg0 ;
+(id)wrapDOMRange:(id)arg0 withAffinity:(NSInteger)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)end;
-(id)start;
-(void)adjustAffinityOfPosition:(id)arg0 isStart:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif