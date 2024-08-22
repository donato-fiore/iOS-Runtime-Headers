// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBCALLBACKSERIALIZATION_H
#define PBCALLBACKSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PBCallbackSerialization : NSObject {
    id *_endBlock;
    BOOL _hasBegun;
    BOOL _hasEnded;
}




-(void)sendBeginBlock:(id)arg0 ;
-(void)sendEndBlock:(id)arg0 ;


@end


#endif