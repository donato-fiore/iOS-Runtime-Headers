// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWBLOCKVISITOR_H
#define _UIVIEWBLOCKVISITOR_H

@class UIViewVisitor;



@interface _UIViewBlockVisitor : UIViewVisitor

@property (copy, nonatomic) id *visitorBlock; // ivar: _visitorBlock


-(BOOL)_visitView:(id)arg0 ;
-(id)initWithTraversalDirection:(NSUInteger)arg0 visitorBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif