// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTREGION_H
#define FTREGION_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "FTRegion.h"

@interface FTRegion : NSObject

@property (retain) NSDictionary *_dictionary; // ivar: _dictionary
@property (retain) FTRegion *_parentRegion; // ivar: _parentRegion
@property (readonly) NSString *basePhoneNumber;
@property (readonly) NSString *isoCode;
@property (readonly) NSString *label;
@property (readonly) FTRegion *parentRegion;
@property (readonly) NSString *regionID;
@property (readonly) NSArray *subRegions; // ivar: _subRegions


-(id)_initWithDictionary:(id)arg0 ;
-(id)description;
-(id)regionWithID:(id)arg0 ;
-(void)dealloc;


@end


#endif