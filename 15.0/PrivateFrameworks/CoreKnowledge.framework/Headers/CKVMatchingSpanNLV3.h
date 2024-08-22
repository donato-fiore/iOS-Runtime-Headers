// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVMATCHINGSPANNLV3_H
#define CKVMATCHINGSPANNLV3_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVMatchingSpanNLV3 : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger beginIndex; // ivar: _beginIndex
@property (readonly, nonatomic) NSUInteger endIndex; // ivar: _endIndex
@property (readonly, nonatomic) NSString *ontologyLabel; // ivar: _ontologyLabel
@property (readonly, nonatomic) NSString *semanticValue; // ivar: _semanticValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMatchingSpanNLV3:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOntologyLabel:(id)arg0 semanticValue:(id)arg1 beginIndex:(NSUInteger)arg2 endIndex:(NSUInteger)arg3 ;


@end


#endif