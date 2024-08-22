// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ANEHASHENCODING_H
#define _ANEHASHENCODING_H


#import <Foundation/Foundation.h>


@interface _ANEHashEncoding : NSObject



+(id)convertToHexString:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)hexStringForBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)hexStringForData:(id)arg0 ;
+(id)hexStringForDataArray:(id)arg0 ;
+(id)hexStringForString:(id)arg0 ;
+(unsigned int)hashForString:(id)arg0 seed:(unsigned int)arg1 ;
+(void)copySHA256For:(id)arg0 toBuffer:(char *)arg1 ;


@end


#endif