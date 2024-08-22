// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANINFO_H
#define CKVSPANINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVSpanInfo : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int editDistance; // ivar: _editDistance
@property (readonly, nonatomic) float matchScore; // ivar: _matchScore
@property (readonly, nonatomic) unsigned int matchedStopWordCount; // ivar: _matchedStopWordCount
@property (readonly, nonatomic) unsigned int matchedTokenCount; // ivar: _matchedTokenCount
@property (readonly, nonatomic) unsigned int maxStopWordCount; // ivar: _maxStopWordCount
@property (readonly, nonatomic) unsigned int maxTokenCount; // ivar: _maxTokenCount
@property (readonly, nonatomic) _NSRange spanRange; // ivar: _spanRange
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(BOOL)isApproximateMatch;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanInfo:(id)arg0 ;
-(BOOL)isPartialMatch;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpanRange:(struct _NSRange )arg0 value:(id)arg1 matchScore:(float)arg2 maxTokenCount:(unsigned int)arg3 matchedTokenCount:(unsigned int)arg4 maxStopWordCount:(unsigned int)arg5 matchedStopWordCount:(unsigned int)arg6 editDistance:(unsigned int)arg7 ;


@end


#endif