// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSHAREDWITHYOUCONTROLLER_H
#define ICSHAREDWITHYOUCONTROLLER_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "ICSharedWithYouControllerInternal.h"

@interface ICSharedWithYouController : NSObject

@property (readonly, nonatomic) ICSharedWithYouControllerInternal *controller; // ivar: _controller
@property (copy, nonatomic) id *didFailToUpdateShareBlock;
@property (copy, nonatomic) id *didSaveShareBlock;
@property (copy, nonatomic) id *didStopSharingBlock;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;


+(id)sharedController;
-(id)highlightForURL:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)fetchShareMetadataWithURLs:(id)arg0 completion:(id)arg1 ;
-(void)userAcceptedInvitationWithShareMetadata:(id)arg0 associatedObjectID:(id)arg1 ;


@end


#endif