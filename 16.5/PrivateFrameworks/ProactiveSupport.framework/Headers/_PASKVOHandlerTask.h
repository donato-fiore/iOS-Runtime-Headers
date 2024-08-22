// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASKVOHANDLERTASK_H
#define _PASKVOHANDLERTASK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PASKVOHandlerTask : NSObject

@property (copy, nonatomic) id *afterBlock; // ivar: _afterBlock
@property (copy, nonatomic) id *beforeAndAfterBlock; // ivar: _beforeAndAfterBlock
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (weak, nonatomic) NSObject *object; // ivar: _object




@end


#endif