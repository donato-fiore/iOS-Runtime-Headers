// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKTEXTRANGE_H
#define VKTEXTRANGE_H

@protocol NSCopying;


#import "VKBaseTextRange.h"
#import "VKTextPosition.h"

@interface VKTextRange : VKBaseTextRange <NSCopying>



@property (retain, nonatomic) VKTextPosition *end; // ivar: _end
@property (readonly, nonatomic) BOOL isNSNotFound;
@property (readonly, nonatomic) BOOL isZeroRange;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSUInteger location;
@property (readonly, nonatomic) NSUInteger maxIndex;
@property (readonly, nonatomic) NSUInteger minIndex;
@property (readonly, nonatomic) _NSRange nsRange;
@property (retain, nonatomic) VKTextPosition *start; // ivar: _start


+(id)defaultRange;
+(id)rangeWithNSRange:(struct _NSRange )arg0 ;
+(id)rangeWithStart:(id)arg0 end:(id)arg1 ;
+(id)rangeWithStartOffset:(NSUInteger)arg0 endOffset:(NSUInteger)arg1 ;
+(id)zeroRange;
-(BOOL)containsTextPosition:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithStart:(id)arg0 end:(id)arg1 ;
-(id)initWithStartOffset:(NSUInteger)arg0 endOffset:(NSUInteger)arg1 ;
-(id)summaryDescription;


@end


#endif