// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPLIBRARYKEEPLOCALSTATUSOBSERVER_H
#define MUSICKIT_SOFTLINKING_MPLIBRARYKEEPLOCALSTATUSOBSERVER_H

@class MPLibraryKeepLocalStatusObserver, MusicKit_SoftLinking_MPModelObject;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver : NSObject {
    MPLibraryKeepLocalStatusObserver *_underlyingLibraryKeepLocalStatusObserver;
}


@property (readonly, nonatomic) MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus currentStatus;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject; // ivar: _identifyingModelObject
@property (copy, nonatomic) id *statusBlock; // ivar: _statusBlock


-(id)initWithIdentifyingModelObject:(id)arg0 ;
-(struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus )_activeKeepLocalStatusFromUnderlyingStatus:(struct MPLibraryActiveKeepLocalStatus )arg0 underlyingDownloadPauseReasons:(NSUInteger)arg1 ;
-(void)_handleUpdatedUnderlyingActiveKeepLocalStatus:(struct MPLibraryActiveKeepLocalStatus )arg0 ;
-(void)calculateDownloadProgressWithChildren:(id)arg0 ;


@end


#endif