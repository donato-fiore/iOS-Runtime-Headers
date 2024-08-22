// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCONTEXTUALUNDERSTANDINGACTIVITYINFERENCEINFERREDACTIVITY_H
#define BMCONTEXTUALUNDERSTANDINGACTIVITYINFERENCEINFERREDACTIVITY_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMContextualUnderstandingActivityInferenceInferredActivity : BMEventBase <BMStoreData>



@property (readonly, nonatomic) int activityType; // ivar: _activityType
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasConfidence; // ivar: _hasConfidence
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithActivityType:(int)arg0 confidence:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif