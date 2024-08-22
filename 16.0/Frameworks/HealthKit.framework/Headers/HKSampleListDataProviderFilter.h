// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSAMPLELISTDATAPROVIDERFILTER_H
#define HKSAMPLELISTDATAPROVIDERFILTER_H


#import <Foundation/Foundation.h>

#import "_HKFilter.h"

@interface HKSampleListDataProviderFilter : NSObject {
    _HKFilter *_filter;
}




-(BOOL)acceptsDataObject:(id)arg0 ;
-(id)init;
-(id)initWithPredicate:(id)arg0 dataTypes:(id)arg1 ;


@end


#endif