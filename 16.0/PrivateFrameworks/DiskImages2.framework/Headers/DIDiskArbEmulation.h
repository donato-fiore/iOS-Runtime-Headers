// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIDISKARBEMULATION_H
#define DIDISKARBEMULATION_H



#import "DIDiskArb.h"

@interface DIDiskArbEmulation : DIDiskArb



-(BOOL)ejectWithBSDName:(id)arg0 error:(*id)arg1 ;
-(BOOL)unmountWithMountPoint:(id)arg0 error:(*id)arg1 ;
-(BOOL)waitForDAIdleWithError:(*id)arg0 ;
-(id)copyDescriptionWithBSDName:(id)arg0 ;
-(void)addDisappearedCallbackWithMountPoint:(id)arg0 shadowMountPoints:(id)arg1 delegate:(id)arg2 ;


@end


#endif