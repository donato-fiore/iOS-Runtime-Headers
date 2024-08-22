// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFLIGHTHOUSEEVENT_H
#define LBFLIGHTHOUSEEVENT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface LBFLighthouseEvent : NSObject

@property (readonly, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSNumber *succeeded; // ivar: _succeeded


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPerformTaskStatus:(BOOL)arg0 error:(id)arg1 ;
-(id)initWithPerformTrialTaskStatus:(BOOL)arg0 error:(id)arg1 ;
-(id)initWithStop:(BOOL)arg0 error:(id)arg1 ;


@end


#endif