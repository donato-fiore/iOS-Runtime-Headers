// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVDATASETSTATISTICS_H
#define CKVDATASETSTATISTICS_H


#import <Foundation/Foundation.h>

#import "CKVDatasetRecord.h"

@interface CKVDatasetStatistics : NSObject

@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (readonly, nonatomic) CGFloat meanLength; // ivar: _meanLength
@property (readonly, nonatomic) NSUInteger minLength; // ivar: _minLength
@property (readonly, nonatomic) CKVDatasetRecord *record; // ivar: _record
@property (readonly, nonatomic) CGFloat stdevLength; // ivar: _stdevLength
@property (readonly, nonatomic) NSUInteger sumLength; // ivar: _sumLength
@property (readonly, nonatomic) NSUInteger sumQLength; // ivar: _sumQLength


+(id)builderWithRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDatasetStatistics:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithRecord:(id)arg0 count:(NSUInteger)arg1 minLength:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 sumLength:(NSUInteger)arg4 sumQLength:(NSUInteger)arg5 meanLength:(CGFloat)arg6 stdevLength:(CGFloat)arg7 ;


@end


#endif