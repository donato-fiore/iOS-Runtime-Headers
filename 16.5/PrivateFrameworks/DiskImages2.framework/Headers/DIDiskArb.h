// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDISKARB_H
#define DIDISKARB_H

@class NSURL, NSError, NSArray;
@protocol DIDisappearedMountPointDelegate;

#import <Foundation/Foundation.h>


@interface DIDiskArb : NSObject

@property BOOL callbackReached; // ivar: _callbackReached
@property (nonatomic) *__DASession daSession; // ivar: _daSession
@property (weak, nonatomic) NSObject<DIDisappearedMountPointDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSURL *inputMountedOnURL; // ivar: _inputMountedOnURL
@property (retain, nonatomic) NSError *operationError; // ivar: _operationError
@property (copy, nonatomic) NSArray *shadowMountedOnURLs; // ivar: _shadowMountedOnURLs


+(id)diskArbWithError:(*id)arg0 ;
-(BOOL)ejectWithBSDName:(id)arg0 error:(*id)arg1 ;
-(BOOL)unmountWithMountPoint:(id)arg0 error:(*id)arg1 ;
-(BOOL)waitForDAIdleWithError:(*id)arg0 ;
-(id)copyDescriptionWithBSDName:(id)arg0 ;
-(id)initWithError:(*id)arg0 ;
-(void)addDisappearedCallbackWithMountPoint:(id)arg0 shadowMountPoints:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)onDiskDisappearedWithDisk:(struct __DADisk *)arg0 ;


@end


#endif