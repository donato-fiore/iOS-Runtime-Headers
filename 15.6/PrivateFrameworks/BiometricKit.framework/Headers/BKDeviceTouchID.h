// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKDEVICETOUCHID_H
#define BKDEVICETOUCHID_H



#import "BKDevice.h"

@interface BKDeviceTouchID : BKDevice



+(BOOL)deviceAvailableWithError:(*id)arg0 ;
-(BOOL)enableBackgroundFingerDetection:(BOOL)arg0 error:(*id)arg1 ;
-(id)createEnrollOperationWithError:(*id)arg0 ;
-(id)createExtendEnrollTouchIDOperationWithError:(*id)arg0 ;
-(id)createMatchOperationWithError:(*id)arg0 ;
-(id)createPresenceDetectOperationWithError:(*id)arg0 ;


@end


#endif