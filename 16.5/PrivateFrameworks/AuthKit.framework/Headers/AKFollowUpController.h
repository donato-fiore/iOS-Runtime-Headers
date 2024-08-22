// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFOLLOWUPCONTROLLER_H
#define AKFOLLOWUPCONTROLLER_H

@class FLFollowUpController, NSString;
@protocol AKFollowUpProvider;

#import <Foundation/Foundation.h>


@interface AKFollowUpController : NSObject <AKFollowUpProvider>

 {
    FLFollowUpController *_followupController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addFollowUpItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearNotificationsForItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllFollowUpItems:(*id)arg0 ;
-(BOOL)removeFollowUpItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)initWithFLFollowupController:(id)arg0 ;
-(id)pendingFollowUpItems:(*id)arg0 ;


@end


#endif