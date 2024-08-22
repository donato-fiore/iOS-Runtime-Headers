// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHFIELD_H
#define CKVSPANMATCHFIELD_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKVSpanInfo.h"

@interface CKVSpanMatchField : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned char fieldComponent; // ivar: _fieldComponent
@property (readonly, nonatomic) NSInteger fieldType; // ivar: _fieldType
@property (readonly, nonatomic) CKVSpanInfo *spanInfo; // ivar: _spanInfo


+(id)labelMatchWithFieldType:(NSInteger)arg0 spanInfo:(id)arg1 ;
+(id)valueMatchWithFieldType:(NSInteger)arg0 spanInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpanInfo:(id)arg0 fieldType:(NSInteger)arg1 fieldComponent:(unsigned char)arg2 ;


@end


#endif