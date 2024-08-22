// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCFGTERMINALNODE_H
#define _HKCFGTERMINALNODE_H

@class HKCFGNode;



@interface _HKCFGTerminalNode : HKCFGNode {
    id *_value;
}




+(id)nodeWithValue:(id)arg0 rangeOfString:(struct _NSRange )arg1 ;
-(id)evaluate;


@end


#endif