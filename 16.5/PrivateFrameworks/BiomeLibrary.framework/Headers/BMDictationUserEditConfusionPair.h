// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDICTATIONUSEREDITCONFUSIONPAIR_H
#define BMDICTATIONUSEREDITCONFUSIONPAIR_H

@class BMEventBase, NSArray, NSString;
@protocol BMStoreData;



@interface BMDictationUserEditConfusionPair : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSArray *correctedTokens; // ivar: _correctedTokens
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIndex; // ivar: _hasIndex
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int index; // ivar: _index
@property (readonly, nonatomic) NSArray *recognizedTokens; // ivar: _recognizedTokens
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIndex:(id)arg0 recognizedTokens:(id)arg1 correctedTokens:(id)arg2 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif