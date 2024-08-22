// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTINSERTIONLAYOUTPROCESSOR_H
#define SXCOMPONENTINSERTIONLAYOUTPROCESSOR_H

@class NSString;
@protocol SXLayoutProcessor, SXComponentInsertionManager;

#import <Foundation/Foundation.h>

#import "SXLayoutOptions.h"

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor>



@property (readonly, nonatomic) NSObject<SXComponentInsertionManager> *componentInsertionManager; // ivar: _componentInsertionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly) Class superclass;


-(id)initWithComponentInsertionManager:(id)arg0 ;
-(void)processLayoutTask:(id)arg0 layoutBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 ;


@end


#endif