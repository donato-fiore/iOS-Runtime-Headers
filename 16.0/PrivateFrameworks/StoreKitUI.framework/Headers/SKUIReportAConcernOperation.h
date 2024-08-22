// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREPORTACONCERNOPERATION_H
#define SKUIREPORTACONCERNOPERATION_H

@class ISOperation, NSDictionary;


#import "SKUIReportAConcernMetadata.h"

@interface SKUIReportAConcernOperation : ISOperation

@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata; // ivar: _metadata
@property (copy) NSDictionary *responseDictionary; // ivar: _responseDictionary


-(id)_httpBody;
-(id)initWithMetadata:(id)arg0 ;
-(void)run;


@end


#endif