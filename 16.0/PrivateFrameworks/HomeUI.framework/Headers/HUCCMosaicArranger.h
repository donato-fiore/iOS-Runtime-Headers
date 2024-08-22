// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCCMOSAICARRANGER_H
#define HUCCMOSAICARRANGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HUCCMosaicArranger : NSObject

@property (nonatomic) NSUInteger chosenLayoutType; // ivar: _chosenLayoutType
@property (retain, nonatomic) NSArray *layouts; // ivar: _layouts
@property (nonatomic) NSUInteger numberOfItemsNeeded; // ivar: _numberOfItemsNeeded


-(id)calculateOrderingForItems:(id)arg0 ;
-(id)initWithCCMosaicType:(NSUInteger)arg0 ;
-(void)_configureForLandscapeGrid;
-(void)_configureForPortraitGrid;


@end


#endif