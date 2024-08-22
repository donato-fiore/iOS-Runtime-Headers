// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCLOUDERRORDATA_H
#define ICASCLOUDERRORDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASErrorStatus.h"

@interface ICASCloudErrorData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASErrorStatus *errorStatus; // ivar: _errorStatus


+(id)dataName;
-(id)initWithErrorStatus:(id)arg0 ;
-(id)toDict;


@end


#endif