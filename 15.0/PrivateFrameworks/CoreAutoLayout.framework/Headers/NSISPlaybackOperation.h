// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSISPLAYBACKOPERATION_H
#define NSISPLAYBACKOPERATION_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NSISPlaybackOperation : NSObject {
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableArray *variableDelegates;
}




-(id)init;
-(id)unwrapLinearExpression:(id)arg0 onEngine:(id)arg1 ;
-(id)unwrapVariable:(id)arg0 ;
-(void)_addToEngine:(id)arg0 ;
-(void)dealloc;
-(void)playbackOneAction:(id)arg0 onEngine:(id)arg1 ;


@end


#endif