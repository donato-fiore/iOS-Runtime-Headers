// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDFAMILIARFACESBULLETINLOGEVENT_H
#define HMDFAMILIARFACESBULLETINLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *bulletinReason; // ivar: _bulletinReason
@property (readonly) BOOL doorbellPressed; // ivar: _doorbellPressed
@property (readonly) NSInteger numberOfKnownPersons; // ivar: _numberOfKnownPersons
@property (readonly) NSInteger numberOfUnknownPersons; // ivar: _numberOfUnknownPersons
@property (readonly) CGFloat secondsFromDoorbellToFaceClassification; // ivar: _secondsFromDoorbellToFaceClassification


-(id)eventName;
-(id)initWithNumberOfKnownPersons:(NSInteger)arg0 numberOfUnknownPersons:(NSInteger)arg1 bulletinReason:(id)arg2 doorbellPressed:(BOOL)arg3 secondsFromDoorbellToFaceClassification:(CGFloat)arg4 ;
-(id)serializedEvent;


@end


#endif