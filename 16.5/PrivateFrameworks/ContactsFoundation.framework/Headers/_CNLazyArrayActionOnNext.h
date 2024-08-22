// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNLAZYARRAYACTIONONNEXT_H
#define _CNLAZYARRAYACTIONONNEXT_H

@class CNLazyArrayOperator;



@interface _CNLazyArrayActionOnNext : CNLazyArrayOperator {
    id *_action;
}




-(id)initWithInput:(id)arg0 action:(id)arg1 ;
-(id)nextObject;


@end


#endif