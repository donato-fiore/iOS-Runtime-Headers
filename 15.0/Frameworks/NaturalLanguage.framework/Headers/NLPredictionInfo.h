// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLPREDICTIONINFO_H
#define NLPREDICTIONINFO_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NLProbabilityInfo.h"

@interface NLPredictionInfo : NSObject <NSCopying, NSSecureCoding>

 {
    NSArray *_tokenIDArray;
    *void _tokenIDs;
}


@property (readonly, nonatomic) NSUInteger contextLength; // ivar: _contextLength
@property (readonly, copy, nonatomic) NSString *prediction; // ivar: _prediction
@property (readonly, copy, nonatomic) NLProbabilityInfo *probabilityInfo; // ivar: _probabilityInfo


+(BOOL)supportsSecureCoding;
-(*unsigned int)tokenIDs;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)tokenIDLength;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrediction:(id)arg0 contextLength:(NSUInteger)arg1 probabilityInfo:(id)arg2 ;
-(id)initWithPrediction:(id)arg0 probabilityInfo:(id)arg1 ;
-(id)initWithPrediction:(id)arg0 tokenIDArray:(id)arg1 contextLength:(NSUInteger)arg2 probabilityInfo:(id)arg3 ;
-(id)initWithPrediction:(id)arg0 tokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 contextLength:(NSUInteger)arg3 probabilityInfo:(id)arg4 ;
-(id)tokenIDArray;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif