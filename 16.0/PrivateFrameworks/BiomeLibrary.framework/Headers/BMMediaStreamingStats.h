// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMMEDIASTREAMINGSTATS_H
#define BMMEDIASTREAMINGSTATS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMMediaStreamingStats : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly, nonatomic) NSString *extra; // ivar: _extra
@property (nonatomic) BOOL hasMeasure; // ivar: _hasMeasure
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat measure; // ivar: _measure
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAppName:(id)arg0 eventName:(id)arg1 measure:(id)arg2 extra:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif