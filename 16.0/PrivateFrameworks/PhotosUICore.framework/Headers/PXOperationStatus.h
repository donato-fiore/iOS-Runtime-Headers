// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXOPERATIONSTATUS_H
#define PXOPERATIONSTATUS_H

@class NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXOperationStatus : NSObject <NSCopying>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithState:(NSInteger)arg0 error:(id)arg1 ;
-(id)initWithState:(NSInteger)arg0 progress:(CGFloat)arg1 error:(id)arg2 ;
-(id)operationStatusByMixingOperationStatus:(id)arg0 withMixFactor:(CGFloat)arg1 ;


@end


#endif