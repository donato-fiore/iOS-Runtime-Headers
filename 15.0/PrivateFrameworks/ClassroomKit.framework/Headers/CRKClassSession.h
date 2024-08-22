// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCLASSSESSION_H
#define CRKCLASSSESSION_H

@class NSString, DMFControlSessionIdentifier, NSDate;
@protocol CATRemoteConnectionDelegate;


#import "CRKSession.h"

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DMFControlSessionIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDate *lastBeaconFoundDate; // ivar: _lastBeaconFoundDate
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 ;
-(id)lastMatchMessageForCurrentDate:(id)arg0 ;
-(id)stateDictionary;
-(void)foundBeaconWithFlags:(unsigned short)arg0 ;
-(void)logBeaconFound;
-(void)lostBeacon;


@end


#endif