// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSWITCHSELECTIONDATA_H
#define ICASSWITCHSELECTIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASSwitchSelectionType.h"

@interface ICASSwitchSelectionData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASSwitchSelectionType *switchSelectionType; // ivar: _switchSelectionType


+(id)dataName;
-(id)initWithSwitchSelectionType:(id)arg0 ;
-(id)toDict;


@end


#endif