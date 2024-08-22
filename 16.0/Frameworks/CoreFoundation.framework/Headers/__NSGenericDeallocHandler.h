// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSGENERICDEALLOCHANDLER_H
#define __NSGENERICDEALLOCHANDLER_H


#import <Foundation/Foundation.h>


@interface __NSGenericDeallocHandler : NSObject {
    Class isa;
    id *_block;
}




+(void)initialize;
-(NSUInteger)retainCount;
-(id)retain;
-(void)finalize;
-(void)release;


@end


#endif