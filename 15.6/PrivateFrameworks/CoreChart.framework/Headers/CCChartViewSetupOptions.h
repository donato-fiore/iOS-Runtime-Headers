// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCCHARTVIEWSETUPOPTIONS_H
#define CCCHARTVIEWSETUPOPTIONS_H

@class NSString, NSDictionary;
@protocol CCChartViewDelegate;

#import <Foundation/Foundation.h>


@interface CCChartViewSetupOptions : NSObject

@property (retain) NSString *baseConfig; // ivar: baseConfig
@property (retain) NSString *config; // ivar: config
@property (retain) NSDictionary *configDictionary;
@property (weak) NSObject<CCChartViewDelegate> *delegate; // ivar: delegate
@property (retain) NSDictionary *expressionFunctions; // ivar: expressionFunctions
@property (retain) NSString *rendererType; // ivar: rendererType




@end


#endif