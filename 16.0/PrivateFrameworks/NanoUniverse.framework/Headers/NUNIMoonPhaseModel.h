// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIMOONPHASEMODEL_H
#define NUNIMOONPHASEMODEL_H

@class NSDate, CLLocation, NSString;

#import <Foundation/Foundation.h>


@interface NUNIMoonPhaseModel : NSObject

@property (readonly, nonatomic) NSDate *entryDate; // ivar: _entryDate
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSInteger hemisphere; // ivar: _hemisphere
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSString *phaseName; // ivar: _phaseName
@property (readonly, nonatomic) NSUInteger phaseNumber; // ivar: _phaseNumber


-(id)initWithDate:(id)arg0 location:(id)arg1 ;


@end


#endif