// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGRAPHSERIESCONFIGURATIONMANAGER_H
#define HKGRAPHSERIESCONFIGURATIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HKGraphSeriesConfigurationManager : NSObject {
    NSMutableDictionary *_zoomLevelConfigurationManagers;
}




-(NSInteger)_zoomLevelForGraphZoom:(NSInteger)arg0 ;
-(id)_configurationManagerForZoom:(NSInteger)arg0 ;
-(id)allDisplayTypes;
-(id)allDisplayTypesForZoom:(NSInteger)arg0 ;
-(id)allGraphSeriesForZoom:(NSInteger)arg0 ;
-(id)configurationForDisplayType:(id)arg0 zoom:(NSInteger)arg1 ;
-(id)configurationForGraphSeries:(id)arg0 zoom:(NSInteger)arg1 ;
-(id)init;
-(void)addConfiguration:(id)arg0 zoom:(NSInteger)arg1 ;
-(void)removeConfigurationsForDisplayType:(id)arg0 ;
-(void)reset;


@end


#endif