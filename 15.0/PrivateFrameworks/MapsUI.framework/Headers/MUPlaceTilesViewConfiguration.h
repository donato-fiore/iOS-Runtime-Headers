// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACETILESVIEWCONFIGURATION_H
#define MUPLACETILESVIEWCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "MUPlaceTileCellConfiguration.h"

@interface MUPlaceTilesViewConfiguration : NSObject

@property (readonly, nonatomic) MUPlaceTileCellConfiguration *cellConfiguration; // ivar: _cellConfiguration
@property (nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (readonly, nonatomic) BOOL shouldDrawPlatter;
@property (nonatomic, getter=isVertical) BOOL vertical; // ivar: _vertical


+(id)annotatedListConfiguration;
+(id)configurationFromModuleConfiguration:(id)arg0 ;
-(id)init;


@end


#endif