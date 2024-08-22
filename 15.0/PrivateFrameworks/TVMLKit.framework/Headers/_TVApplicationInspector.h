// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVAPPLICATIONINSPECTOR_H
#define _TVAPPLICATIONINSPECTOR_H

@class NSString, NSHashTable;
@protocol _TVInspectorCapturingViewDelegate;

#import <Foundation/Foundation.h>

#import "TVApplicationController.h"
#import "_TVInspectorCapturingView.h"

@interface _TVApplicationInspector : NSObject <_TVInspectorCapturingViewDelegate>



@property (readonly, weak, nonatomic) TVApplicationController *applicationController; // ivar: _applicationController
@property (readonly, nonatomic) _TVInspectorCapturingView *capturingView; // ivar: _capturingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *highlightViews; // ivar: _highlightViews
@property (nonatomic, getter=isInspectionModeEnabled) BOOL inspectionModeEnabled; // ivar: _inspectionModeEnabled
@property (readonly) Class superclass;


-(id)_highlightViewForElement:(id)arg0 contentColor:(id)arg1 borderColor:(id)arg2 ;
-(id)initWithApplicationController:(id)arg0 ;
-(id)rootView;
-(void)cancelHighlight;
-(void)capturingView:(id)arg0 didCaptureTapOnView:(id)arg1 ;
-(void)highlightViewElements:(id)arg0 contentColor:(id)arg1 borderColor:(id)arg2 ;


@end


#endif