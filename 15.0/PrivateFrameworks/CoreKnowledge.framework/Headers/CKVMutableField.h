// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVMUTABLEFIELD_H
#define CKVMUTABLEFIELD_H

@class NSString;


#import "CKVField.h"

@interface CKVMutableField : CKVField

@property (nonatomic) NSInteger fieldType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif