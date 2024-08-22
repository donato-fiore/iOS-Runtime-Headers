// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTSIZERENGINE_H
#define SXCOMPONENTSIZERENGINE_H

@class NSString;
@protocol SXComponentSizerEngine;

#import <Foundation/Foundation.h>

#import "SXComponentTypeMatching.h"

@interface SXComponentSizerEngine : NSObject <SXComponentSizerEngine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXComponentTypeMatching *factoryMatching; // ivar: _factoryMatching
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(void)addFactory:(id)arg0 ;
-(void)removeFactory:(id)arg0 ;


@end


#endif