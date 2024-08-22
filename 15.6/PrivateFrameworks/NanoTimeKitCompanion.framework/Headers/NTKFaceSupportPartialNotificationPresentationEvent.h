// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESUPPORTPARTIALNOTIFICATIONPRESENTATIONEVENT_H
#define NTKFACESUPPORTPARTIALNOTIFICATIONPRESENTATIONEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportPartialNotificationPresentationEvent : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDate *pushDate; // ivar: _pushDate


-(id)initWithIdentifier:(id)arg0 pushDate:(id)arg1 ;
-(id)presentationEventWithStatus:(NSInteger)arg0 artworkUsed:(NSInteger)arg1 errorCode:(NSInteger)arg2 optOutStatus:(NSInteger)arg3 ;


@end


#endif