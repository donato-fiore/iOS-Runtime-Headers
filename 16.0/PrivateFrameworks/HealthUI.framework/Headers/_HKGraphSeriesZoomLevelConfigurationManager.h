// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKGRAPHSERIESZOOMLEVELCONFIGURATIONMANAGER_H
#define _HKGRAPHSERIESZOOMLEVELCONFIGURATIONMANAGER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _HKGraphSeriesZoomLevelConfigurationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *displayTypeIdentifierToConfiguration; // ivar: _displayTypeIdentifierToConfiguration
@property (retain, nonatomic) NSMutableArray *graphSeriesInOrderAdded; // ivar: _graphSeriesInOrderAdded
@property (retain, nonatomic) NSMutableDictionary *graphSeriesUUIDToConfiguration; // ivar: _graphSeriesUUIDToConfiguration


-(id)_displayTypeIdentifierForDisplayType:(id)arg0 ;
-(id)allDisplayTypes;
-(id)allGraphSeries;
-(id)configurationForDisplayType:(id)arg0 ;
-(id)configurationForGraphSeries:(id)arg0 ;
-(id)init;
-(void)addConfiguration:(id)arg0 ;
-(void)removeConfigurationForDisplayType:(id)arg0 ;
-(void)reset;


@end


#endif