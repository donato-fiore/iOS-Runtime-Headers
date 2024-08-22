// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCOLLABORATIONNOTICECONTROLLER_H
#define IMCOLLABORATIONNOTICECONTROLLER_H


#import <Foundation/Foundation.h>


@interface IMCollaborationNoticeController : NSObject



+(id)sharedInstance;
-(id)init;
-(id)listener;
-(id)remoteDaemon;
-(void)collaborationNoticesDidChangeForChatGUIDs:(id)arg0 ;
-(void)dismissNotice:(id)arg0 ;
-(void)fetchCollaborationNoticesForChatGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)markAsViewedForNotice:(id)arg0 ;


@end


#endif