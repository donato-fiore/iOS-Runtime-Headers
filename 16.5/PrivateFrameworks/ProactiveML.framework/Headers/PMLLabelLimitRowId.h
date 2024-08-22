// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLLABELLIMITROWID_H
#define PMLLABELLIMITROWID_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PMLLabelLimitRowId : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSInteger rowId; // ivar: _rowId


+(id)labelLimitRowIdWithLabel:(id)arg0 limit:(NSInteger)arg1 rowId:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabelLimitRowId:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLabel:(id)arg0 limit:(NSInteger)arg1 rowId:(NSInteger)arg2 ;


@end


#endif