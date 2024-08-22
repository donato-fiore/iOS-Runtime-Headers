// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYPARTICIPANTACTIONCOORDINATOR_H
#define PXSHAREDLIBRARYPARTICIPANTACTIONCOORDINATOR_H

@class UIViewController;
@protocol PXSharedLibraryParticipant;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryStatusProvider.h"

@interface PXSharedLibraryParticipantActionCoordinator : NSObject {
    PXSharedLibraryStatusProvider *_statusProvider;
    UIViewController *_actionViewController;
}


@property (readonly, nonatomic) UIViewController *actionViewController;
@property (readonly, nonatomic) NSObject<PXSharedLibraryParticipant> *participant; // ivar: _participant


-(id)initWithParticipant:(id)arg0 ;
-(void)_removeParticipant:(id)arg0 ;
-(void)_resendInvitation:(id)arg0 ;


@end


#endif