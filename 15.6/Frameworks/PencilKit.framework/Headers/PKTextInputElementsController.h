// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTELEMENTSCONTROLLER_H
#define PKTEXTINPUTELEMENTSCONTROLLER_H

@class UIView, NSDictionary, NSString;
@protocol PKTextInputDebugStateReporting, PKTextInputElementsControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKTextInputElementsController : NSObject <PKTextInputDebugStateReporting>

 {
    NSInteger _nextElementRecognitionIdentifierIndex;
    NSInteger _finderGenerationCounter;
    NSInteger _finderGenerationOfLastDiscoveredElements;
    id<PKTextInputElementsControllerDelegate> *_delegate;
    UIView *_containerView;
    NSDictionary *_lastDiscoveredElementsByUniqueID;
    CGFloat _lastDiscoveredElementsUpdateTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)reportDebugStateDescription:(id)arg0 ;


@end


#endif