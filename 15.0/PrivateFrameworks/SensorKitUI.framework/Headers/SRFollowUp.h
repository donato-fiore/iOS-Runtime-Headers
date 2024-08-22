// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRFOLLOWUP_H
#define SRFOLLOWUP_H

@class FLFollowUpController, NSString;
@protocol SRFollowUpPosting;

#import <Foundation/Foundation.h>


@interface SRFollowUp : NSObject <SRFollowUpPosting>

 {
    FLFollowUpController *_followUpController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)pendingFollowUpItemsWithCompletion:(id)arg0 ;
-(void)postFollowUpItem:(id)arg0 completion:(id)arg1 ;


@end


#endif