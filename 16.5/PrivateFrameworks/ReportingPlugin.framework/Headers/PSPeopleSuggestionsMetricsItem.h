// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSPEOPLESUGGESTIONSMETRICSITEM_H
#define PSPEOPLESUGGESTIONSMETRICSITEM_H


#import <Foundation/Foundation.h>

#import "_PSPeopleSuggestionsMetricsItemInternal.h"

@interface PSPeopleSuggestionsMetricsItem : NSObject

@property (readonly) _PSPeopleSuggestionsMetricsItemInternal *underlyingObject; // ivar: _underlyingObject


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithId:(id)arg0 model:(id)arg1 transportBundleId:(id)arg2 rank:(unsigned char)arg3 ;


@end


#endif