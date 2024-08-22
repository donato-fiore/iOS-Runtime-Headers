// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUOPERATIONSTATUS_H
#define PUOPERATIONSTATUS_H

@class NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUOperationStatus : NSObject <NSCopying>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithState:(NSInteger)arg0 progress:(CGFloat)arg1 error:(id)arg2 ;
-(id)operationStatusByMixingOperationStatus:(id)arg0 withMixFactor:(CGFloat)arg1 ;
-(id)redactedDescription;


@end


#endif