// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUOSSTATEHANDLER_H
#define BUOSSTATEHANDLER_H


#import <Foundation/Foundation.h>


@interface BUOSStateHandler : NSObject

@property (nonatomic) NSUInteger osStateHandle; // ivar: _osStateHandle


-(id)initWithTitle:(id)arg0 block:(id)arg1 ;
-(id)initWithTitle:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dealloc;


@end


#endif