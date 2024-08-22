// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLSEQUENCE_H
#define MLSEQUENCE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLSequence : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) NSArray *int64Values;
@property (readonly, nonatomic) NSArray *stringValues;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
+(id)emptySequenceWithType:(NSInteger)arg0 ;
+(id)sequenceFromArray:(id)arg0 error:(*id)arg1 ;
+(id)sequenceWithInt64Array:(id)arg0 ;
+(id)sequenceWithStringArray:(id)arg0 ;
-(id)initWithArray:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif