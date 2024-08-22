// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSTYLEDATA_H
#define ICASSTYLEDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASStyleType.h"

@interface ICASStyleData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASStyleType *styleType; // ivar: _styleType


+(id)dataName;
-(id)initWithStyleType:(id)arg0 ;
-(id)toDict;


@end


#endif