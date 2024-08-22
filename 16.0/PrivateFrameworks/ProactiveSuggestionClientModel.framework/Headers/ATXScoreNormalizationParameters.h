// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSCORENORMALIZATIONPARAMETERS_H
#define ATXSCORENORMALIZATIONPARAMETERS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface ATXScoreNormalizationParameters : NSObject

@property (readonly, nonatomic) NSNumber *bufferSize; // ivar: _bufferSize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXScoreNormalizationParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithBufferSize:(id)arg0 ;


@end


#endif