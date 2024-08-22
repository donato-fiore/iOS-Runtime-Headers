// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXSCROLLPOSITIONMANAGER_H
#define SXSCROLLPOSITIONMANAGER_H

@class NSString;
@protocol SXScrollPositionManager, SXScrollPositionRestoring;

#import <Foundation/Foundation.h>


@interface SXScrollPositionManager : NSObject <SXScrollPositionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SXScrollPositionRestoring> *scrollPositionRestoring; // ivar: _scrollPositionRestoring
@property (readonly) Class superclass;


-(void)updateScrollPosition:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif