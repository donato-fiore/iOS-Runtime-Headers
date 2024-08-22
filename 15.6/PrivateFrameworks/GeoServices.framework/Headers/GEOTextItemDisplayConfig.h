// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTEXTITEMDISPLAYCONFIG_H
#define GEOTEXTITEMDISPLAYCONFIG_H

@protocol GEOTextItemDisplayConfig;

#import <Foundation/Foundation.h>


@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig>



@property (readonly, nonatomic) unsigned int maxItemsPerRow; // ivar: _maxItemsPerRow
@property (readonly, nonatomic) unsigned int maxRowCount; // ivar: _maxRowCount


-(id)init;
-(id)initWithMaxItemsPerRow:(unsigned int)arg0 maxRowCount:(unsigned int)arg1 ;
-(id)initWithTextItemDisplayConfig:(id)arg0 ;


@end


#endif