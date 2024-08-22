// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGINPUTSUGGESTIONSRESPONSE_H
#define PSGINPUTSUGGESTIONSRESPONSE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PSGInputSuggestionsExplanationSet.h"

@interface PSGInputSuggestionsResponse : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PSGInputSuggestionsExplanationSet *explanationSet; // ivar: _explanationSet
@property (readonly, nonatomic) NSArray *responseItems; // ivar: _responseItems
@property (nonatomic) CGFloat servingTimeMillis; // ivar: _servingTimeMillis
@property (nonatomic) int triggeredItemsCount; // ivar: _triggeredItemsCount
@property (nonatomic) CGFloat triggeringTimeMillis; // ivar: _triggeringTimeMillis


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseItems:(id)arg0 explanationSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif