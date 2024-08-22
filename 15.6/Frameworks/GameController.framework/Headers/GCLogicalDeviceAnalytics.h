// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCLOGICALDEVICEANALYTICS_H
#define GCLOGICALDEVICEANALYTICS_H

@class NSDate, NSString, NSMutableArray;
@protocol NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCLogicalDeviceAnalytics : NSObject {
    NSDate *_curSessionStartTime;
    NSDate *_firstSessionStartTime;
    BOOL _eventSent;
}


@property (readonly, retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, retain, nonatomic) NSObject<NSObject><NSCopying><NSSecureCoding> *controllerID; // ivar: _controllerID
@property (readonly, retain, nonatomic) NSString *productCategory; // ivar: _productCategory
@property (retain, nonatomic) NSMutableArray *sessionIntervals; // ivar: _sessionIntervals


-(CGFloat)sessionActiveDuration;
-(CGFloat)sessionTotalDuration;
-(id)description;
-(id)initWithAnonymousIdentifier:(id)arg0 bundleIdentifier:(id)arg1 productCategory:(id)arg2 ;
-(void)flushSessionAndSendCAEvent;
-(void)pauseSession;
-(void)resumeSession;


@end


#endif