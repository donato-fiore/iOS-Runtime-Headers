// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSWITCHSELECTIONCONTEXTDATA_H
#define ICASSWITCHSELECTIONCONTEXTDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASSwitchSelectionContext.h"

@interface ICASSwitchSelectionContextData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASSwitchSelectionContext *switchSelectionContext; // ivar: _switchSelectionContext


+(id)dataName;
-(id)initWithSwitchSelectionContext:(id)arg0 ;
-(id)toDict;


@end


#endif