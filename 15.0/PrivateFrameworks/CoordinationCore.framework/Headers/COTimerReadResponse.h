// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COTIMERREADRESPONSE_H
#define COTIMERREADRESPONSE_H

@class NSArray;


#import "COMeshResponse.h"

@interface COTimerReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *deletes; // ivar: _deletes
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered; // ivar: _filtered
@property (readonly, copy, nonatomic) NSArray *timers; // ivar: _timers


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilteredTimers:(id)arg0 ;
-(id)initWithTimers:(id)arg0 ;
-(id)initWithTimers:(id)arg0 deletes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif