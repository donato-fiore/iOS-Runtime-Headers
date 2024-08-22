// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14COPRESENCECORE23IDSGROUPSESSIONPROVIDER_H
#define _TTC14COPRESENCECORE23IDSGROUPSESSIONPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC14CopresenceCore23IDSGroupSessionProvider : NSObject {
    ? delegate;
    ? groupID;
    ? members;
    ? localMember;
    ? service;
    ? queue;
    ? groupSession;
    ? participantIdentifier;
    ? virtualParticipant;
    ? participants;
    ? abcReporter;
    ? state;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(void)dealloc;


@end


#endif