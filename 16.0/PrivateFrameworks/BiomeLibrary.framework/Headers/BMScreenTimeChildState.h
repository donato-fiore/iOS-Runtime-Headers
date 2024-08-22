// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSCREENTIMECHILDSTATE_H
#define BMSCREENTIMECHILDSTATE_H

@class BMEventBase, NSString, NSDate;
@protocol BMStoreData;



@interface BMScreenTimeChildState : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_signalDate;
    CGFloat _raw_signalDate;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventID; // ivar: _eventID
@property (nonatomic) BOOL hasStarting; // ivar: _hasStarting
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *signalDate;
@property (readonly, nonatomic) BOOL starting; // ivar: _starting
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userDSID; // ivar: _userDSID


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithStarting:(id)arg0 eventID:(id)arg1 signalDate:(id)arg2 userDSID:(id)arg3 state:(int)arg4 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif