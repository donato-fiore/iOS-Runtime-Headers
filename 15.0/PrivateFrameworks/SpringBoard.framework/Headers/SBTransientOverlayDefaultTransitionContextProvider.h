// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSIENTOVERLAYDEFAULTTRANSITIONCONTEXTPROVIDER_H
#define SBTRANSIENTOVERLAYDEFAULTTRANSITIONCONTEXTPROVIDER_H

@class NSMutableArray, NSString;
@protocol SBTransientOverlayTransitionContextProviding;

#import <Foundation/Foundation.h>


@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding>

 {
    BOOL _didPerformAlongsideTransitions;
    BOOL _isCompleted;
    NSMutableArray *_transitionBlocks;
    NSMutableArray *_transitionCompletionBlocks;
    BOOL _transitionCompletedSuccessfully;
}


@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: animated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)completeTransition:(BOOL)arg0 ;
-(void)performAlongsideTransitions;
// -(void)transitionAlongsideUsingBlock:(id)arg0 completion:(unk)arg1  ;


@end


#endif