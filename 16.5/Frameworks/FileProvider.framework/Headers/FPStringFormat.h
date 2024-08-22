// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPSTRINGFORMAT_H
#define FPSTRINGFORMAT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FPStringFormat : NSObject

@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSArray *keyPaths; // ivar: _keyPaths
@property (readonly) NSUInteger length;


+(id)formatForPlistObject:(id)arg0 localizationLookup:(id)arg1 ;
+(id)formatForStringFormatDict:(id)arg0 localizationLookup:(id)arg1 ;
-(id)evaluateWithValuesByName:(id)arg0 error:(*id)arg1 ;


@end


#endif