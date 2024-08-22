// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFCOLLABORATIONITEMSREQUEST_H
#define _SFCOLLABORATIONITEMSREQUEST_H

@class NSArray, NSMutableArray, NSURL;
@protocol _SFCollaborationItemsRequestDelegate;

#import <Foundation/Foundation.h>


@interface _SFCollaborationItemsRequest : NSObject

@property (copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (retain, nonatomic) NSMutableArray *collaborationItems; // ivar: _collaborationItems
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) NSObject<_SFCollaborationItemsRequestDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSURL *managedFileURL; // ivar: _managedFileURL
@property (retain, nonatomic) NSMutableArray *remainingActivityItems; // ivar: _remainingActivityItems
@property (nonatomic) BOOL supportsMultipleCollaboration; // ivar: _supportsMultipleCollaboration


-(id)collaborationService;
-(id)initWithActivityItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addCollaborationItem:(id)arg0 ;
-(void)_processRemainingActivityItems;
-(void)cancel;
-(void)perform;


@end


#endif