// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICORECONTACTPROPERTYVALUEFILTERFACTORY_H
#define CNUICORECONTACTPROPERTYVALUEFILTERFACTORY_H


#import <Foundation/Foundation.h>


@interface CNUICoreContactPropertyValueFilterFactory : NSObject



+(id)aggregatePropertyValueFilterWithValueFilters:(id)arg0 ;
+(id)nicknameFilter;
+(id)noteFilter;
+(id)photoFilter;
+(id)relationshipsFilter;


@end


#endif