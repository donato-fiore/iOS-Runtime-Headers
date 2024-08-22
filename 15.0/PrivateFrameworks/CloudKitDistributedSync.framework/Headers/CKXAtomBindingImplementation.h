// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXATOMBINDINGIMPLEMENTATION_H
#define CKXATOMBINDINGIMPLEMENTATION_H

@protocol CKXBinding;

#import <Foundation/Foundation.h>

#import "CKXSchema.h"

@interface CKXAtomBindingImplementation : NSObject <CKXBinding>

 {
    ? tokens;
}


@property (retain, nonatomic) CKXSchema *schema; // ivar: _schema


-(Class)mutableProxyClassForStructToken:(NSUInteger)arg0 ;
-(Class)objectClassForStructToken:(NSUInteger)arg0 ;
-(Class)proxyClassForStructToken:(NSUInteger)arg0 ;
-(NSUInteger)structTokenForClass:(Class)arg0 ;
-(NSUInteger)topLevelStructToken;
-(id)init;
-(id)orcHelpers;


@end


#endif