// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYPROFILEFILTEROPTIONS_H
#define HFACCESSORYPROFILEFILTEROPTIONS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HFAccessoryProfileFilterOptions : NSObject

@property (copy, nonatomic) NSSet *byAccessories; // ivar: _byAccessories
@property (copy, nonatomic) NSSet *byCategoryTypes; // ivar: _byCategoryTypes
@property (copy, nonatomic) NSSet *byClasses; // ivar: _byClasses
@property (nonatomic) BOOL byFavorites; // ivar: _byFavorites
@property (copy, nonatomic) id *byFilter; // ivar: _byFilter
@property (copy, nonatomic) NSSet *byManufacturers; // ivar: _byManufacturers
@property (copy, nonatomic) NSSet *byModels; // ivar: _byModels
@property (copy, nonatomic) NSSet *byRooms; // ivar: _byRooms




@end


#endif