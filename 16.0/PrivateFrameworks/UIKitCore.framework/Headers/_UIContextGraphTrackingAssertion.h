// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTGRAPHTRACKINGASSERTION_H
#define _UICONTEXTGRAPHTRACKINGASSERTION_H

@class BSSimpleAssertion, NSArray;



@interface _UIContextGraphTrackingAssertion : BSSimpleAssertion {
    NSArray *_contextIDGraph;
    id *_clientHandlerBlock;
}


@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID


-(BOOL)isContextIDRelevant:(unsigned int)arg0 ;
// -(id)initWithContextID:(unsigned int)arg0 windowGraph:(id)arg1 clientHandlerBlock:(id)arg2 invalidationBlock:(unk)arg3  ;
-(void)_setWindowGraph:(id)arg0 callHandler:(BOOL)arg1 ;
-(void)setWindowGraph:(id)arg0 ;


@end


#endif