// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEUPDATERSTATUS_H
#define DEUPDATERSTATUS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEUpdaterStatus : NSObject

@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (nonatomic) BOOL loggedEvent; // ivar: _loggedEvent
@property (retain, nonatomic) NSString *publicationId; // ivar: _publicationId
@property (nonatomic) BOOL upToDate; // ivar: _upToDate
@property (retain, nonatomic) NSString *version; // ivar: _version


-(id)initWithPublicationId:(id)arg0 upToDate:(BOOL)arg1 version:(id)arg2 ;
-(void)logCoreAnalyticsEvent;


@end


#endif