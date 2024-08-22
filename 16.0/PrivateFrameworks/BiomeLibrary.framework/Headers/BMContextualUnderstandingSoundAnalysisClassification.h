// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTUALUNDERSTANDINGSOUNDANALYSISCLASSIFICATION_H
#define BMCONTEXTUALUNDERSTANDINGSOUNDANALYSISCLASSIFICATION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMContextualUnderstandingSoundAnalysisClassification : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int durationInSecs; // ivar: _durationInSecs
@property (nonatomic) BOOL hasConfidence; // ivar: _hasConfidence
@property (nonatomic) BOOL hasDurationInSecs; // ivar: _hasDurationInSecs
@property (nonatomic) BOOL hasStartOffsetInSecs; // ivar: _hasStartOffsetInSecs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *soundName; // ivar: _soundName
@property (readonly, nonatomic) unsigned int startOffsetInSecs; // ivar: _startOffsetInSecs
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithSoundName:(id)arg0 confidence:(id)arg1 startOffsetInSecs:(id)arg2 durationInSecs:(id)arg3 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif