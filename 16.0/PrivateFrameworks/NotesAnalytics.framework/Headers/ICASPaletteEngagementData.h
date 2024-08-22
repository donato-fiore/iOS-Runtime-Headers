// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASPALETTEENGAGEMENTDATA_H
#define ICASPALETTEENGAGEMENTDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASPaletteEngagementType.h"

@interface ICASPaletteEngagementData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASPaletteEngagementType *paletteEngagementType; // ivar: _paletteEngagementType


+(id)dataName;
-(id)initWithPaletteEngagementType:(id)arg0 ;
-(id)toDict;


@end


#endif