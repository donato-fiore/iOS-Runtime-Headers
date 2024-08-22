// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYFILECOORDINATOR_H
#define PFUBIQUITYFILECOORDINATOR_H

@class NSFileCoordinator, NSString;



@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString *_localPeerID;
}




-(BOOL)shouldRetryForError:(id)arg0 ignoreFile:(*BOOL)arg1 ;
-(id)initWithFilePresenter:(id)arg0 ;
-(void)dealloc;


@end


#endif