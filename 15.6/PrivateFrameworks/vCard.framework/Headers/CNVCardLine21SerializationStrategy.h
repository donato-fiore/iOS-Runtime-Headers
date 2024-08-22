// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDLINE21SERIALIZATIONSTRATEGY_H
#define CNVCARDLINE21SERIALIZATIONSTRATEGY_H

@class NSArray;


#import "CNVCardLineSerializationStrategyImpl.h"

@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    NSArray *_encodings;
}




+(id)serializerWithStorage:(id)arg0 encodings:(id)arg1 ;
-(id)detectedTypeOfData:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(id)initWithStorage:(id)arg0 encodings:(id)arg1 ;
-(id)necessaryEncodingForValue:(id)arg0 ;
-(void)_addAutomagicParametersForData:(id)arg0 ;
-(void)serializeArray:(id)arg0 withItemSeparator:(id)arg1 ;
-(void)serializeData:(id)arg0 ;
-(void)serializeGroupedLines:(id)arg0 withGroupingName:(id)arg1 ;
-(void)serializeParameters:(id)arg0 ;
-(void)serializeString:(id)arg0 ;
-(void)serializeVersionPlaceholder;


@end


#endif