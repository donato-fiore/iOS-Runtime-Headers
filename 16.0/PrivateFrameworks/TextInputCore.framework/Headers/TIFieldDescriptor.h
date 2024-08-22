// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIFIELDDESCRIPTOR_H
#define TIFIELDDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIFieldDescriptor : NSObject

@property (readonly, nonatomic) NSString *fieldDescription; // ivar: _fieldDescription
@property (readonly, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, nonatomic) NSObject *inactiveValue; // ivar: _inactiveValue
@property (readonly, nonatomic) NSString *metricName; // ivar: _metricName
@property (readonly, nonatomic) NSString *metricType; // ivar: _metricType


+(id)fieldDescriptorWithFieldName:(id)arg0 fieldDescription:(id)arg1 metricName:(id)arg2 metricType:(id)arg3 inactiveValue:(id)arg4 ;
-(id)initWithFieldName:(id)arg0 fieldDescription:(id)arg1 metricName:(id)arg2 metricType:(id)arg3 inactiveValue:(id)arg4 ;


@end


#endif