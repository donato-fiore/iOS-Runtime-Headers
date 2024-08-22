// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITEMPLATEPARSINGDATAPROVIDER_H
#define SKUITEMPLATEPARSINGDATAPROVIDER_H

@class SSVURLDataConsumer, NSRegularExpression;



@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer

@property (readonly, nonatomic) NSRegularExpression *regularExpression; // ivar: _regularExpression


+(id)templateParsingRegularExpression;
-(id)initWithRegularExpression:(id)arg0 ;
-(id)objectForData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;


@end


#endif