// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSEARCHFIELD_H
#define CKVSEARCHFIELD_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVSearchField : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *fieldText; // ivar: _fieldText
@property (readonly, nonatomic) NSInteger fieldType; // ivar: _fieldType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(NSInteger)arg0 text:(id)arg1 ;


@end


#endif