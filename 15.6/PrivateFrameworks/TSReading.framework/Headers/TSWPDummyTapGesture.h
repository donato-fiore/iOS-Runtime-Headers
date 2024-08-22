// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDUMMYTAPGESTURE_H
#define TSWPDUMMYTAPGESTURE_H

@class NSString;
@protocol TSDGesture, TSDGestureTarget, TSDGestureDelegate;

#import <Foundation/Foundation.h>

#import "TSDRep.h"

@interface TSWPDummyTapGesture : NSObject <TSDGesture>



@property (retain, nonatomic) NSObject<TSDGestureTarget> *cachedGestureTarget; // ivar: cachedGestureTarget
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<TSDGestureDelegate> *gestureDelegate; // ivar: gestureDelegate
@property (retain, nonatomic) NSString *gestureKind; // ivar: _gestureKind
@property (readonly, nonatomic) int gestureState; // ivar: gestureState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSDRep *targetRep; // ivar: targetRep


-(BOOL)isDone;
-(id)initWithKind:(id)arg0 ;
-(struct CGPoint )boundsLocationForICC:(id)arg0 ;
-(struct CGPoint )naturalLocationForRep:(id)arg0 ;
-(struct CGPoint )unscaledLocationForICC:(id)arg0 ;
-(void)dealloc;


@end


#endif