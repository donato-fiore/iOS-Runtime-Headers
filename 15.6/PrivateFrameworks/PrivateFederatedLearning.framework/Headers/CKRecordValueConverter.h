// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKRECORDVALUECONVERTER_H
#define CKRECORDVALUECONVERTER_H


#import <Foundation/Foundation.h>


@interface CKRecordValueConverter : NSObject



+(BOOL)hasField:(id)arg0 inRecord:(id)arg1 ;
+(CGFloat)doubleFrom:(id)arg0 field:(id)arg1 ;
+(NSInteger)int64From:(id)arg0 field:(id)arg1 ;
+(id)stringFrom:(id)arg0 field:(id)arg1 ;
+(id)stringsListFrom:(id)arg0 field:(id)arg1 ;
+(void)_validateFieldType:(Class)arg0 typeDescription:(id)arg1 inCKRecord:(id)arg2 field:(id)arg3 ;


@end


#endif