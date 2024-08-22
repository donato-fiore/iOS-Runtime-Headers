// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTVIEWENGINE_H
#define SXCOMPONENTVIEWENGINE_H

@class NSString;
@protocol SXComponentViewEngine, SXComponentViewPostProcessorManager;

#import <Foundation/Foundation.h>

#import "SXComponentTypeMatching.h"

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXComponentTypeMatching *factoryMatching; // ivar: _factoryMatching
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponentViewPostProcessorManager> *postProcessorManager; // ivar: _postProcessorManager
@property (readonly) Class superclass;


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithPostProcessorManager:(id)arg0 ;
-(void)addFactory:(id)arg0 ;
-(void)removeFactory:(id)arg0 ;


@end


#endif