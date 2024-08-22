// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMEDIAFORMATCONVERSIONJOB_H
#define PHMEDIAFORMATCONVERSIONJOB_H


#import <Foundation/Foundation.h>

#import "PHMediaFormatConversionRequest.h"

@interface PHMediaFormatConversionJob : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property (retain) PHMediaFormatConversionRequest *conversionRequest; // ivar: _conversionRequest


-(id)description;


@end


#endif