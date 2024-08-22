// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFCALLBACKSCOPE_H
#define TFCALLBACKSCOPE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TFCallbackScope : NSObject

@property (readonly, nonatomic) NSArray *names; // ivar: _names
@property (readonly, nonatomic) NSUInteger scope; // ivar: _scope


-(id)initWithScope:(NSUInteger)arg0 names:(id)arg1 ;


@end


#endif