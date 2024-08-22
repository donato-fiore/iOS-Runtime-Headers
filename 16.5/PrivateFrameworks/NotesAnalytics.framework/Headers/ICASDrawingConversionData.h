// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASDRAWINGCONVERSIONDATA_H
#define ICASDRAWINGCONVERSIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASConversionMethod.h"

@interface ICASDrawingConversionData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASConversionMethod *conversionMethod; // ivar: _conversionMethod


+(id)dataName;
-(id)initWithConversionMethod:(id)arg0 ;
-(id)toDict;


@end


#endif