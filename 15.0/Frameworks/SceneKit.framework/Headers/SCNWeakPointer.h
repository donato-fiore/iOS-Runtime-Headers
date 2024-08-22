// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNWEAKPOINTER_H
#define SCNWEAKPOINTER_H


#import <Foundation/Foundation.h>


@interface SCNWeakPointer : NSObject

@property (weak, nonatomic) id *weakRef; // ivar: weakRef


-(id)copyWeakRef;


@end


#endif