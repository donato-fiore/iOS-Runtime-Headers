// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVMATCHINGSPAN_H
#define CKVMATCHINGSPAN_H

@class NSString, USOGraph;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKVMatchingSpanMetadata.h"

@interface CKVMatchingSpan : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger beginIndex; // ivar: _beginIndex
@property (readonly, nonatomic) NSUInteger endIndex; // ivar: _endIndex
@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly, nonatomic) CKVMatchingSpanMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) USOGraph *ontologyGraph; // ivar: _ontologyGraph
@property (readonly, nonatomic) NSString *ontologyLabel; // ivar: _ontologyLabel
@property (readonly, nonatomic) NSString *originAppId; // ivar: _originAppId
@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) NSString *semanticValue; // ivar: _semanticValue


+(BOOL)supportsSecureCoding;
+(id)matchingSpanFromSpanMatch:(id)arg0 withItemInfo:(id)arg1 rankScore:(float)arg2 ;
+(id)matchingSpanFromSpanMatch:(id)arg0 withItemInfo:(id)arg1 rankScore:(float)arg2 priorInfo:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMatchingSpan:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOntologyGraph:(id)arg0 ontologyLabel:(id)arg1 semanticValue:(id)arg2 beginIndex:(NSUInteger)arg3 endIndex:(NSUInteger)arg4 itemId:(id)arg5 originAppId:(id)arg6 score:(float)arg7 matchScore:(float)arg8 priorInfo:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif