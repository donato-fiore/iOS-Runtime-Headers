// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATAPDESCRIPTION_H
#define CATAPDESCRIPTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CATapDescription : NSObject {
    NSArray *_processes;
    BOOL _isMono;
}


@property (retain) NSString *UUID; // ivar: _UUID
@property (readonly) BOOL isAMixdown; // ivar: _isAMixdown
@property (readonly) BOOL isExclusive; // ivar: _isExclusive
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *preferredClockDevice; // ivar: _preferredClockDevice


-(BOOL)isMono;
-(id)generateUID;
-(id)getProcesses;
-(id)initMonoGlobalTapButExcludeProcesses:(id)arg0 ;
-(id)initMonoMixdownOfProcessesIDs:(id)arg0 ;
-(id)initStereoGlobalTapButExcludeProcesses:(id)arg0 ;
-(id)initStereoMixdownOfProcessesIDs:(id)arg0 ;
-(id)initWithActiveStreamsForProcessDevicePairs:(id)arg0 ;
-(id)initWithProcessDevicePairs:(id)arg0 ;


@end


#endif