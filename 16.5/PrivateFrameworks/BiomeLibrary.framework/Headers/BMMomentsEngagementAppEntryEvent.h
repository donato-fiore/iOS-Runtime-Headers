// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSENGAGEMENTAPPENTRYEVENT_H
#define BMMOMENTSENGAGEMENTAPPENTRYEVENT_H

@class BMEventBase, NSString, NSDate, NSArray;
@protocol BMStoreData;



@interface BMMomentsEngagementAppEntryEvent : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_timestamp;
    CGFloat _raw_timestamp;
    BOOL _hasRaw_startTime;
    CGFloat _raw_startTime;
    BOOL _hasRaw_endTime;
    CGFloat _raw_endTime;
}


@property (readonly, nonatomic) int addedCharacters; // ivar: _addedCharacters
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL hasAddedCharacters; // ivar: _hasAddedCharacters
@property (nonatomic) BOOL hasTotalCharacters; // ivar: _hasTotalCharacters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) int totalCharacters; // ivar: _totalCharacters
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSArray *usedPhotoAssets; // ivar: _usedPhotoAssets


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(int)arg0 clientIdentifier:(id)arg1 timestamp:(id)arg2 identifier:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 totalCharacters:(id)arg6 addedCharacters:(id)arg7 usedPhotoAssets:(id)arg8 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif