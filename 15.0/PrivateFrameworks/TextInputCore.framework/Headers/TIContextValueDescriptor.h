// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICONTEXTVALUEDESCRIPTOR_H
#define TICONTEXTVALUEDESCRIPTOR_H

@class NSString;


#import "TIMetricDescriptor.h"

@interface TIContextValueDescriptor : TIMetricDescriptor

@property (retain) NSString *contextFieldName; // ivar: _contextFieldName


+(id)contextValueDescriptorWithMetricName:(id)arg0 contextFieldName:(id)arg1 ;
-(id)initWithMetricName:(id)arg0 contextFieldName:(id)arg1 ;


@end


#endif