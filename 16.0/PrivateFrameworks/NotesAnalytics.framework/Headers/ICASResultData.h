// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASRESULTDATA_H
#define ICASRESULTDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASResultType.h"

@interface ICASResultData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASResultType *resultType; // ivar: _resultType


+(id)dataName;
-(id)initWithResultType:(id)arg0 ;
-(id)toDict;


@end


#endif