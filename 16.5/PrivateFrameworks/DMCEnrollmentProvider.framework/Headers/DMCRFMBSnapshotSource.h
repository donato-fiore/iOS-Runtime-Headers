// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCRFMBSNAPSHOTSOURCE_H
#define DMCRFMBSNAPSHOTSOURCE_H

@class NSString, MBManager;
@protocol DMCRFSnapshotSource, DMCRFSnapshotSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DMCRFMBRestoreDelegate.h"

@interface DMCRFMBSnapshotSource : NSObject <DMCRFSnapshotSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DMCRFSnapshotSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MBManager *mobileBackup; // ivar: _mobileBackup
@property (copy, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) DMCRFMBRestoreDelegate *restoreDelegate; // ivar: _restoreDelegate
@property (readonly) Class superclass;


-(BOOL)startRestoreForSnapshot:(id)arg0 excludingAppBundleIdentifiers:(id)arg1 completion:(id)arg2 ;
-(id)initWithPersonaIdentifier:(id)arg0 delegate:(id)arg1 ;
-(void)fetchAppBundleIDsForSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)fetchRestorableSnapshotsWithCompletion:(id)arg0 ;


@end


#endif