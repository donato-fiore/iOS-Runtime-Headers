// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDLINESERIALIZATIONSTRATEGYIMPL_H
#define CNVCARDLINESERIALIZATIONSTRATEGYIMPL_H

@class NSString;
@protocol CNVCardLineSerialization, CNVCardSerializationStorage;

#import <Foundation/Foundation.h>


@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization>

 {
    id<CNVCardSerializationStorage> *_storage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serializerWithStorage:(id)arg0 ;
-(BOOL)canSerializeArray:(id)arg0 ;
-(BOOL)canSerializeData:(id)arg0 ;
-(BOOL)canSerializeString:(id)arg0 ;
-(NSUInteger)estimatedDataLength;
-(id)initWithStorage:(id)arg0 ;
-(id)insertionMarker;
-(void)insertLine:(id)arg0 atMarker:(id)arg1 ;
-(void)serializeArray:(id)arg0 withItemSeparator:(id)arg1 ;
-(void)serializeData:(id)arg0 ;
-(void)serializeGroupedLines:(id)arg0 withGroupingName:(id)arg1 ;
-(void)serializeGroupingName:(id)arg0 ;
-(void)serializeLine:(id)arg0 ;
-(void)serializeName:(id)arg0 ;
-(void)serializeOpaqueValue:(id)arg0 ;
-(void)serializeParameters:(id)arg0 ;
-(void)serializeString:(id)arg0 ;
-(void)serializeVersionPlaceholder;
-(void)willSerializeValue;


@end


#endif