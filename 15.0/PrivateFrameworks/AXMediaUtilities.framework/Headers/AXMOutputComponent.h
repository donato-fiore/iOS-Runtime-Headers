// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMOUTPUTCOMPONENT_H
#define AXMOUTPUTCOMPONENT_H


#import <Foundation/Foundation.h>


@interface AXMOutputComponent : NSObject

@property (nonatomic) NSInteger componentState; // ivar: _componentState


+(BOOL)isSupported;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)description;
-(id)init;
-(void)handleRequest:(id)arg0 completion:(id)arg1 ;
-(void)transitionToState:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif