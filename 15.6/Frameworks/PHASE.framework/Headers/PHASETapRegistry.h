// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASETAPREGISTRY_H
#define PHASETAPREGISTRY_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASETapRegistry : NSObject {
    PHASEEngine *_weakEngine;
    NSMutableSet *_descriptions;
}




+(id)new;
-(BOOL)registerTapReceiverForDescription:(id)arg0 block:(id)arg1 ;
-(BOOL)registerTapReceiverWithIdentifier:(id)arg0 block:(id)arg1 ;
-(id)init;
-(id)initWithEngine:(id)arg0 ;
-(id)tapReceiverFormatForDescription:(id)arg0 ;
-(id)tapReceiverFormatForIdentifier:(id)arg0 ;
-(void)reset;
-(void)unregisterTapReceiverForDescription:(id)arg0 ;
-(void)unregisterTapReceiverWithIdentifier:(id)arg0 ;


@end


#endif