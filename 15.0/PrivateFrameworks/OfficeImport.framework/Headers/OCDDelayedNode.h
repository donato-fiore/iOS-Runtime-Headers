// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCDDELAYEDNODE_H
#define OCDDELAYEDNODE_H

@protocol OCDDelayedNodeContext;

#import <Foundation/Foundation.h>


@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> *mDelayedContext;
    BOOL mLoaded;
}




-(BOOL)isLoaded;
-(BOOL)load;
-(id)delayedContext;
-(void)setDelayedContext:(id)arg0 ;
-(void)setLoaded:(BOOL)arg0 ;


@end


#endif