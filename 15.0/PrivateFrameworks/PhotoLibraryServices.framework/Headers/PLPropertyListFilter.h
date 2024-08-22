// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPROPERTYLISTFILTER_H
#define PLPROPERTYLISTFILTER_H


#import <Foundation/Foundation.h>


@interface PLPropertyListFilter : NSObject



+(BOOL)canEncodeInPropertyList:(id)arg0 ;
+(id)_filterArray:(id)arg0 block:(id)arg1 ;
+(id)_filterDictionary:(id)arg0 block:(id)arg1 ;
+(id)filterPropertyList:(id)arg0 ;
+(id)filterPropertyList:(id)arg0 block:(id)arg1 ;
+(id)filterPropertyListNoData:(id)arg0 ;


@end


#endif