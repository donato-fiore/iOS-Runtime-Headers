// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RETRANSFORMERINVOCATION_H
#define RETRANSFORMERINVOCATION_H


#import <Foundation/Foundation.h>


@interface RETransformerInvocation : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _values;
}


@property (readonly, nonatomic) NSUInteger numberOfArguments;


+(id)invocationWithArguments:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(NSUInteger)getArgumentAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setArgument:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif