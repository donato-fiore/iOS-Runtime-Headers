// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONITEMSPROVIDER_H
#define SFCOLLABORATIONITEMSPROVIDER_H

@class NSArray, NSString, NSURL;
@protocol _SFCollaborationItemsRequestDelegate, SFCollaborationItemsProviderDelegate;

#import <Foundation/Foundation.h>

#import "_SFCollaborationItemsRequest.h"

@interface SFCollaborationItemsProvider : NSObject <_SFCollaborationItemsRequestDelegate>



@property (copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (copy, nonatomic) NSArray *collaborationItems; // ivar: _collaborationItems
@property (retain, nonatomic) _SFCollaborationItemsRequest *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFCollaborationItemsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *managedFileURL; // ivar: _managedFileURL
@property (readonly, nonatomic) BOOL multipleCollaborationItems;
@property (readonly, copy, nonatomic) NSArray *placeholderActivityItems;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleCollaboration; // ivar: _supportsMultipleCollaboration


-(id)activityItemsForActivity:(id)arg0 collaborationResult:(id)arg1 ;
-(id)activityItemsForActivity:(id)arg0 collaborationResult:(id)arg1 isCollaborative:(BOOL)arg2 ;
-(id)collaborationItemForActivityItem:(id)arg0 ;
-(id)collaborationItemsRequest:(id)arg0 resolveActivityItem:(id)arg1 ;
-(id)collaborationServiceForItemsRequest:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 delegate:(id)arg1 ;
-(id)initWithActivityItems:(id)arg0 delegate:(id)arg1 managedFileURL:(id)arg2 ;
-(void)_didCompleteCollaborationItems:(id)arg0 ;
-(void)_updateCollaborationItems;


@end


#endif