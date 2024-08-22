// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMLRANGECONVERSIONRESULT_H
#define SSMLRANGECONVERSIONRESULT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface SSMLRangeConversionResult : NSObject

@property (nonatomic) _NSRange convertedRange; // ivar: _convertedRange
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *plainString; // ivar: _plainString


-(id)init;


@end


#endif