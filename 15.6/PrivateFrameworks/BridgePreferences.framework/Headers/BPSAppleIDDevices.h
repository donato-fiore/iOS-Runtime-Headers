// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSAPPLEIDDEVICES_H
#define BPSAPPLEIDDEVICES_H


#import <Foundation/Foundation.h>


@interface BPSAppleIDDevices : NSObject



+(BOOL)isNetworkError:(id)arg0 ;
+(void)fetchFamilyMemberForAltDSID:(id)arg0 username:(id)arg1 withCompletion:(id)arg2 ;
+(void)fetchFamilyMemberForDevice:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif