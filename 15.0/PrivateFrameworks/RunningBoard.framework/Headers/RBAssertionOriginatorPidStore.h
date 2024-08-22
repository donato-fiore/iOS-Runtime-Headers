// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBASSERTIONORIGINATORPIDSTORE_H
#define RBASSERTIONORIGINATORPIDSTORE_H

@class NSString;
@protocol RBAssertionOriginatorPidPersisting, RBStateCapturing;

#import <Foundation/Foundation.h>


@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing>

 {
    *? _header;
    NSString *_path;
    *int _pids;
    int _headerID;
    int _pidsID;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(BOOL)containsPid:(int)arg0 ;
-(BOOL)isValid;
-(id)captureState;
-(id)initWithPath:(id)arg0 ;
-(void)addPid:(int)arg0 ;
-(void)dealloc;
-(void)removePid:(int)arg0 ;
-(void)setValidProcesses:(id)arg0 ;


@end


#endif