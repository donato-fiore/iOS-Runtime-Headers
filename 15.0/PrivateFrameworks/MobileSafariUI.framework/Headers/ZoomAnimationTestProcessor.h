// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ZOOMANIMATIONTESTPROCESSOR_H
#define ZOOMANIMATIONTESTPROCESSOR_H



#import "ContentInteractionTestRunner.h"

@interface ZoomAnimationTestProcessor : ContentInteractionTestRunner

@property (nonatomic) CGFloat initialZoom; // ivar: _initialZoom
@property (nonatomic) int iterationsRemaining; // ivar: _iterationsRemaining
@property (nonatomic) int targetIndex; // ivar: _targetIndex
@property (nonatomic) NSInteger testState; // ivar: _testState


-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)advanceTest;
-(void)dealloc;
-(void)resetZoom;
-(void)scrollViewDidEndZooming:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 ;
-(void)startZoom;


@end


#endif