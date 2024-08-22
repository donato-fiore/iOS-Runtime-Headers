// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMSAVEREQUESTTRACKEDVALUECONTAINER_H
#define REMSAVEREQUESTTRACKEDVALUECONTAINER_H

@protocol REMSaveRequestTrackedValue;

#import <Foundation/Foundation.h>


@interface REMSaveRequestTrackedValueContainer : NSObject

@property (retain, nonatomic) NSObject<REMSaveRequestTrackedValue> *template; // ivar: _template
@property (weak, nonatomic) NSObject<REMSaveRequestTrackedValue> *weakValue; // ivar: _weakValue


-(id)initWithValue:(id)arg0 ;
-(id)valueForSaveRequest:(id)arg0 ;
-(id)valueWithoutPerformingCopy;


@end


#endif