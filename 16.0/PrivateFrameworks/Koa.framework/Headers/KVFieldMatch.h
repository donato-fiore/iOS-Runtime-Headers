// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVFIELDMATCH_H
#define KVFIELDMATCH_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "KVSpanInfo.h"

@interface KVFieldMatch : NSObject <NSCopying>

 {
    KVSpanInfo *_spanInfo;
    NSInteger _fieldType;
    unsigned char _fieldComponent;
}




+(id)labelMatchWithFieldType:(NSInteger)arg0 spanInfo:(id)arg1 ;
+(id)valueMatchWithFieldType:(NSInteger)arg0 spanInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpanMatchField:(id)arg0 ;
-(BOOL)isLabelMatch;
-(BOOL)isValueMatch;
-(NSInteger)fieldType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fieldSpanInfo;
-(id)fieldSpanValue;
-(id)init;
-(id)initWithSpanInfo:(id)arg0 fieldType:(NSInteger)arg1 fieldComponent:(unsigned char)arg2 ;
-(unsigned char)fieldComponent;


@end


#endif