// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASTAGADDDATA_H
#define ICASTAGADDDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASTagAddApproach.h"

@interface ICASTagAddData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *isAutoConversionEnabled; // ivar: _isAutoConversionEnabled
@property (readonly, nonatomic) NSNumber *isExistingTag; // ivar: _isExistingTag
@property (readonly, nonatomic) ICASTagAddApproach *tagAddApproach; // ivar: _tagAddApproach


+(id)dataName;
-(id)initWithIsExistingTag:(id)arg0 tagAddApproach:(id)arg1 isAutoConversionEnabled:(id)arg2 ;
-(id)toDict;


@end


#endif