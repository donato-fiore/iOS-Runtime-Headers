// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOMPOSITOR_H
#define AVTCOMPOSITOR_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface AVTCompositor : NSObject {
    NSMutableSet *_textureProviders;
}




+(id)propertyNames;
-(id)init;
-(void)addClient:(id)arg0 ;
-(void)componentDidChangeForTypes:(NSUInteger)arg0 ;
-(void)configureMaterial:(id)arg0 propertyNamed:(id)arg1 memoji:(id)arg2 ;
-(void)removeClient:(id)arg0 ;
-(void)skinColorDidChange;


@end


#endif