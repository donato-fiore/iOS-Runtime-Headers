// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSESHARESHEETMETRICSSYSTEMRESOURCEUSAGE_H
#define BMMLSESHARESHEETMETRICSSYSTEMRESOURCEUSAGE_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMMLSEShareSheetMetricsSystemResourceUsage : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration; // ivar: _hasDuration
@property (nonatomic) BOOL hasTimeoutOccured; // ivar: _hasTimeoutOccured
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *subidentifier; // ivar: _subidentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL timeoutOccured; // ivar: _timeoutOccured
@property (readonly, nonatomic) int userType; // ivar: _userType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDuration:(id)arg0 userType:(int)arg1 timeoutOccured:(id)arg2 identifier:(id)arg3 subidentifier:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif