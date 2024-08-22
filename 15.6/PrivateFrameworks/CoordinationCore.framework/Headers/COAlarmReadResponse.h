// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COALARMREADRESPONSE_H
#define COALARMREADRESPONSE_H

@class NSArray;


#import "COMeshResponse.h"

@interface COAlarmReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *alarms; // ivar: _alarms
@property (readonly, copy, nonatomic) NSArray *deletes; // ivar: _deletes
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered; // ivar: _filtered


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAlarms:(id)arg0 ;
-(id)initWithAlarms:(id)arg0 deletes:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilteredAlarms:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif