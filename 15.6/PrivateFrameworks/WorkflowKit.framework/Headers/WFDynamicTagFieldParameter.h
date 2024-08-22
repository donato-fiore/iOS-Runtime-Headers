// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDYNAMICTAGFIELDPARAMETER_H
#define WFDYNAMICTAGFIELDPARAMETER_H

@protocol WFDynamicTagFieldDataSource;


#import "WFTagFieldParameter.h"

@interface WFDynamicTagFieldParameter : WFTagFieldParameter

@property (weak, nonatomic) NSObject<WFDynamicTagFieldDataSource> *dataSource; // ivar: _dataSource


-(id)suggestedTags;


@end


#endif