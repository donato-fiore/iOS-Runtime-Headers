// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVCARDLINE30SERIALIZATIONSTRATEGY_H
#define CNVCARDLINE30SERIALIZATIONSTRATEGY_H



#import "CNVCardLineSerializationStrategyImpl.h"

@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    NSUInteger _startingLineLength;
}




-(id)detectedTypeOfData:(id)arg0 ;
-(void)_addAutomagicParametersForData:(id)arg0 ;
-(void)serializeArray:(id)arg0 withItemSeparator:(id)arg1 ;
-(void)serializeData:(id)arg0 ;
-(void)serializeGroupedLines:(id)arg0 withGroupingName:(id)arg1 ;
-(void)serializeGroupingName:(id)arg0 ;
-(void)serializeParameters:(id)arg0 ;
-(void)serializeString:(id)arg0 ;
-(void)serializeVersionPlaceholder;
-(void)willSerializeValue;


@end


#endif