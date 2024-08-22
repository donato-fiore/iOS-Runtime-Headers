// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSUPDATEACTIVITYREQUEST_H
#define CMSUPDATEACTIVITYREQUEST_H

@class NSDictionary, NSString, NSDate;
@protocol CMSCoding;

#import <Foundation/Foundation.h>

#import "CMSContentFailure.h"
#import "CMSPlayerContext.h"

@interface CMSUpdateActivityRequest : NSObject <CMSCoding>



@property (retain, nonatomic) NSDictionary *constraints; // ivar: _constraints
@property (retain, nonatomic) CMSContentFailure *contentFailure; // ivar: _contentFailure
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CMSPlayerContext *nowPlaying; // ivar: _nowPlaying
@property (retain, nonatomic) CMSPlayerContext *previouslyPlaying; // ivar: _previouslyPlaying
@property (nonatomic) NSUInteger report; // ivar: _report
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSDictionary *userActivityDictionary; // ivar: _userActivityDictionary


-(id)cmsCoded;
-(id)initForActivity:(id)arg0 failure:(id)arg1 whilePlaying:(id)arg2 nowPlaying:(id)arg3 ;
-(id)initForActivity:(id)arg0 report:(NSUInteger)arg1 nowPlaying:(id)arg2 previouslyPlaying:(id)arg3 ;


@end


#endif