// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRINAMESPACES_H
#define TRINAMESPACES_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRINamespaces : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *namespaceIdArray;
@property (readonly, nonatomic) NSUInteger namespaceIdArray_Count;


+(id)descriptor;


@end


#endif