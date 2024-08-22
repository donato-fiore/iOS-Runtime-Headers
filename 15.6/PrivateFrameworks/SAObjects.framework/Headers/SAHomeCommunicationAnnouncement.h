// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHOMECOMMUNICATIONANNOUNCEMENT_H
#define SAHOMECOMMUNICATIONANNOUNCEMENT_H

@class NSDate, NSString;
@protocol SABackgroundContextObject;


#import "SADomainObject.h"

@interface SAHomeCommunicationAnnouncement : SADomainObject <SABackgroundContextObject>



@property (copy, nonatomic) NSDate *datePlaybackFinished;
@property (copy, nonatomic) NSDate *datePlaybackStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif