// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIPOSTSIRIENGAGEMENTSIGNALDELTAEVENT_H
#define BMSIRIPOSTSIRIENGAGEMENTSIGNALDELTAEVENT_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriPostSiriEngagementSignalDeltaEvent : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration; // ivar: _hasDuration
@property (nonatomic) BOOL hasSinceUIEnd; // ivar: _hasSinceUIEnd
@property (nonatomic) BOOL hasSinceUIStart; // ivar: _hasSinceUIStart
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat sinceUIEnd; // ivar: _sinceUIEnd
@property (readonly, nonatomic) CGFloat sinceUIStart; // ivar: _sinceUIStart
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDuration:(id)arg0 sinceUIEnd:(id)arg1 sinceUIStart:(id)arg2 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif