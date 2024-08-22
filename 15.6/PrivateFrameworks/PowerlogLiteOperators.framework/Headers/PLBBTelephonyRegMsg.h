// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBTELEPHONYREGMSG_H
#define PLBBTELEPHONYREGMSG_H

@class NSNumber, NSString, NSDictionary, NSDate;


#import "PLBasebandMessage.h"

@interface PLBBTelephonyRegMsg : PLBasebandMessage

@property (retain) NSNumber *cellID; // ivar: _cellID
@property unsigned char changed; // ivar: _changed
@property (retain) NSNumber *dataActive; // ivar: _dataActive
@property (retain) NSNumber *dataAttached; // ivar: _dataAttached
@property (retain) NSString *dataIndicator; // ivar: _dataIndicator
@property (retain) NSNumber *homeNetwork; // ivar: _homeNetwork
@property (retain) NSNumber *lac; // ivar: _lac
@property (retain) NSString *operatorName; // ivar: _operatorName
@property (retain) NSString *registrationStatus; // ivar: _registrationStatus
@property (retain) NSDictionary *telRegInfo; // ivar: _telRegInfo
@property (retain) NSDate *timeUpdate; // ivar: _timeUpdate


+(id)bbEuLogMsgNameTelephonyReg;
-(id)humanReadableDataIndicator:(id)arg0 ;
-(id)humanReadableRegistrationStatus:(id)arg0 ;
-(id)init;
-(void)fillPLEntryAndSend:(id)arg0 ;
-(void)logEventPointTelephonyRegistration;
-(void)logEventPointTelephonyRegistrationAtInit;
-(void)processTelReg;
-(void)refreshTelephonyReg;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setAttrCellID:(id)arg0 ;
-(void)setAttrDataActive:(id)arg0 ;
-(void)setAttrDataAttached:(id)arg0 ;
-(void)setAttrDataIndicator:(id)arg0 ;
-(void)setAttrHomeNetwork:(id)arg0 ;
-(void)setAttrLac:(id)arg0 ;
-(void)setAttrOperatorName:(id)arg0 ;
-(void)setAttrRegistrationStatus:(id)arg0 ;


@end


#endif