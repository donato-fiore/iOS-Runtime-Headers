// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFHOMEANNOUNCEMENTMUTATION_H
#define _AFHOMEANNOUNCEMENTMUTATION_H

@class NSString, NSDate;
@protocol AFHomeAnnouncementMutating;

#import <Foundation/Foundation.h>

#import "AFHomeAnnouncement.h"

@interface _AFHomeAnnouncementMutation : NSObject <AFHomeAnnouncementMutating>

 {
    AFHomeAnnouncement *_base;
    NSString *_identifier;
    NSUInteger _startedHostTime;
    NSUInteger _finishedHostTime;
    NSDate *_startedDate;
    NSDate *_finishedDate;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSUInteger)getFinishedHostTime;
-(NSUInteger)getStartedHostTime;
-(id)getFinishedDate;
-(id)getIdentifier;
-(id)getStartedDate;
-(id)initWithBase:(id)arg0 ;
-(void)setFinishedDate:(id)arg0 ;
-(void)setFinishedHostTime:(NSUInteger)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setStartedDate:(id)arg0 ;
-(void)setStartedHostTime:(NSUInteger)arg0 ;


@end


#endif