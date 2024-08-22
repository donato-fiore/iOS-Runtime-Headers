// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSAPPSUGGESTIONSMETRICSITEM_H
#define PSAPPSUGGESTIONSMETRICSITEM_H


#import <Foundation/Foundation.h>

#import "_PSAppSuggestionsMetricsItem.h"

@interface PSAppSuggestionsMetricsItem : NSObject

@property (readonly) _PSAppSuggestionsMetricsItem *underlyingObject; // ivar: _underlyingObject


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTransportBundleId:(id)arg0 model:(id)arg1 rank:(unsigned char)arg2 ;


@end


#endif