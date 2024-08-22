// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIANNOTATEDENTITYANNOTATION_H
#define BMSIRIANNOTATEDENTITYANNOTATION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriAnnotatedEntityAnnotation : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasValue; // ivar: _hasValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(int)arg0 value:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif