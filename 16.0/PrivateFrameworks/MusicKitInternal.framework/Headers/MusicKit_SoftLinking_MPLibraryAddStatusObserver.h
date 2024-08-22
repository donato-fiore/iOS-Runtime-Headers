// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPLIBRARYADDSTATUSOBSERVER_H
#define MUSICKIT_SOFTLINKING_MPLIBRARYADDSTATUSOBSERVER_H

@class MPLibraryAddStatusObserver, MusicKit_SoftLinking_MPModelObject;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPLibraryAddStatusObserver : NSObject {
    MPLibraryAddStatusObserver *_underlyingLibraryAddStatusObserver;
}


@property (readonly, nonatomic) NSInteger currentStatus;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPModelObject *identifyingModelObject; // ivar: _identifyingModelObject
@property (copy, nonatomic) id *statusBlock; // ivar: _statusBlock


-(NSInteger)_libraryAddStatusFromUnderlyingStatus:(NSInteger)arg0 ;
-(id)initWithIdentifyingModelObject:(id)arg0 ;
-(void)_handleUpdatedUnderlyingLibraryAddStatus:(NSInteger)arg0 ;


@end


#endif