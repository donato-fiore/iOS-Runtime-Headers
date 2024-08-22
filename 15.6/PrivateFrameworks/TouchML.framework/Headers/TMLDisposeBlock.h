// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLDISPOSEBLOCK_H
#define TMLDISPOSEBLOCK_H


#import <Foundation/Foundation.h>


@interface TMLDisposeBlock : NSObject {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)tmlDispose;


@end


#endif