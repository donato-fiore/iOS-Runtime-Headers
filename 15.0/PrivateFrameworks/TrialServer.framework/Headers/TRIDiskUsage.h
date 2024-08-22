// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIDISKUSAGE_H
#define TRIDISKUSAGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIDiskUsage : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger compressedSum; // ivar: _compressedSum
@property (readonly, nonatomic) NSUInteger deduplicatedSum; // ivar: _deduplicatedSum
@property (readonly, nonatomic) NSUInteger naiveSum; // ivar: _naiveSum


+(id)usageWithNaiveSum:(NSUInteger)arg0 deduplicatedSum:(NSUInteger)arg1 compressedSum:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUsage:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCompressedSum:(NSUInteger)arg0 ;
-(id)copyWithReplacementDeduplicatedSum:(NSUInteger)arg0 ;
-(id)copyWithReplacementNaiveSum:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithNaiveSum:(NSUInteger)arg0 deduplicatedSum:(NSUInteger)arg1 compressedSum:(NSUInteger)arg2 ;


@end


#endif