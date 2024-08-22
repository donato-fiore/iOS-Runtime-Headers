// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSCONTENTFAILUREREQUEST_H
#define CMSCONTENTFAILUREREQUEST_H

@class NSDictionary, NSString, NSURL, NSDate;
@protocol CMSCoding;

#import <Foundation/Foundation.h>

#import "CMSContentFailure.h"
#import "CMSPlayerContext.h"

@interface CMSContentFailureRequest : NSObject <CMSCoding>



@property (retain, nonatomic) NSDictionary *constraints; // ivar: _constraints
@property (retain, nonatomic) CMSContentFailure *contentFailure; // ivar: _contentFailure
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *nextContentURL; // ivar: _nextContentURL
@property (retain, nonatomic) NSURL *previousContentURL; // ivar: _previousContentURL
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSDictionary *userActivityDictionary; // ivar: _userActivityDictionary
@property (retain, nonatomic) CMSPlayerContext *whilePlaying; // ivar: _whilePlaying


-(id)cmsCoded;
-(id)initWithContentFailure:(id)arg0 whilePlaying:(id)arg1 previousContentURL:(id)arg2 nextContentURL:(id)arg3 userActivityDictionary:(id)arg4 ;


@end


#endif