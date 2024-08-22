// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASTAGDELETEDATA_H
#define ICASTAGDELETEDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASTagDeleteApproach.h"

@interface ICASTagDeleteData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASTagDeleteApproach *tagDeleteApproach; // ivar: _tagDeleteApproach


+(id)dataName;
-(id)initWithTagDeleteApproach:(id)arg0 ;
-(id)toDict;


@end


#endif