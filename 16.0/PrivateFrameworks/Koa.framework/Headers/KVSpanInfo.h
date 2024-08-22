// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSPANINFO_H
#define KVSPANINFO_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KVSpanInfo : NSObject <NSCopying>

 {
    NSString *_value;
    NSData *_buffer;
    *SpanInfo _spanInfo;
}




+(id)spanInfoFromEncodedString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isAliasMatch;
-(BOOL)isApproximateMatch;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanInfo:(id)arg0 ;
-(BOOL)isPartialMatch;
-(NSUInteger)hash;
-(float)matchScore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodedString;
-(id)init;
-(id)initWithBuffer:(id)arg0 verify:(BOOL)arg1 value:(id)arg2 error:(*id)arg3 ;
-(id)initWithValue:(id)arg0 location:(unsigned int)arg1 length:(unsigned int)arg2 matchScore:(float)arg3 maxTokenCount:(unsigned int)arg4 matchedTokenCount:(unsigned int)arg5 maxStopWordCount:(unsigned int)arg6 matchedStopWordCount:(unsigned int)arg7 maxAliasCount:(unsigned int)arg8 matchedAliasCount:(unsigned int)arg9 editDistance:(unsigned int)arg10 ;
-(id)value;
-(struct _NSRange )spanRange;
-(unsigned int)editDistance;
-(unsigned int)matchedAliasCount;
-(unsigned int)matchedStopWordCount;
-(unsigned int)matchedTokenCount;
-(unsigned int)maxAliasCount;
-(unsigned int)maxStopWordCount;
-(unsigned int)maxTokenCount;


@end


#endif