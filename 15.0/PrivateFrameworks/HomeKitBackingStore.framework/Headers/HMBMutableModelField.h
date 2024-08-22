// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBMUTABLEMODELFIELD_H
#define HMBMUTABLEMODELFIELD_H

@class HMFVersion;


#import "HMBModelField.h"

@interface HMBMutableModelField : HMBModelField

@property (retain, nonatomic) id *defaultValue;
@property (nonatomic) NSUInteger loggingVisibility;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif