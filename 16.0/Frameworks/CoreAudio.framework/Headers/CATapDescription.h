// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATAPDESCRIPTION_H
#define CATAPDESCRIPTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CATapDescription : NSObject {
    NSArray *_processes;
    BOOL _isMono;
}


@property (retain) NSString *UUID; // ivar: _UUID
@property BOOL isAMixdown; // ivar: _isAMixdown
@property BOOL isExclusive; // ivar: _isExclusive
@property (retain) NSString *name; // ivar: _name


-(BOOL)isMono;
-(id)generateUID;
-(id)getProcesses;
-(id)initMonoGlobalTapButExcludeProcesses:(id)arg0 ;
-(id)initMonoMixdownOfProcessesIDs:(id)arg0 ;
-(id)initStereoGlobalTapButExcludeProcesses:(id)arg0 ;
-(id)initStereoMixdownOfProcessesIDs:(id)arg0 ;
-(id)initWithActiveStreamsForProcessDevicePairs:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithProcessDevicePairs:(id)arg0 ;
-(void)setIsMono:(BOOL)arg0 ;
-(void)setProcesses:(id)arg0 ;


@end


#endif