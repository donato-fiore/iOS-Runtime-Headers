// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONCOMPOSITIONDICTIONARYPROVIDER_H
#define SFCOLLABORATIONCOMPOSITIONDICTIONARYPROVIDER_H

@class NSString;
@protocol SFCollaborationItemChangeObserver, SFCollaborationItemsProviderDelegate, SFCollaborationCompositionDictionaryProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFCollaborationItemsProvider.h"
#import "DummySFCollaborationService.h"

@interface SFCollaborationCompositionDictionaryProvider : NSObject <SFCollaborationItemChangeObserver, SFCollaborationItemsProviderDelegate>



@property (retain, nonatomic) SFCollaborationItemsProvider *collaborationItemsProvider; // ivar: _collaborationItemsProvider
@property (retain, nonatomic) DummySFCollaborationService *collaborationService; // ivar: _collaborationService
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<SFCollaborationCompositionDictionaryProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)collaborationItemsProvider:(id)arg0 resolveActivityItem:(id)arg1 ;
-(id)collaborationServiceForItemsProvider:(id)arg0 ;
-(id)initWithItemProvider:(id)arg0 delegate:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 ;


@end


#endif