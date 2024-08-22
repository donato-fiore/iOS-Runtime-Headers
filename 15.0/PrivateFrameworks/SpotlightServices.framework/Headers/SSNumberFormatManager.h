// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSNUMBERFORMATMANAGER_H
#define SSNUMBERFORMATMANAGER_H

@class NSByteCountFormatter, NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface SSNumberFormatManager : NSObject

@property (retain) NSByteCountFormatter *byteCountFormatter; // ivar: _byteCountFormatter
@property (retain) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter


+(id)stringFromByteCount:(NSInteger)arg0 ;
+(id)stringFromInt:(int)arg0 withMinimumDigits:(NSUInteger)arg1 ;
+(void)initialize;
-(id)init;


@end


#endif