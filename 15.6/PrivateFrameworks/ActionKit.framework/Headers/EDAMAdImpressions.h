// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMADIMPRESSIONS_H
#define EDAMADIMPRESSIONS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMAdImpressions : FATObject

@property (retain, nonatomic) NSNumber *adId; // ivar: _adId
@property (retain, nonatomic) NSNumber *impressionCount; // ivar: _impressionCount
@property (retain, nonatomic) NSNumber *impressionTime; // ivar: _impressionTime


+(id)structFields;
+(id)structName;


@end


#endif