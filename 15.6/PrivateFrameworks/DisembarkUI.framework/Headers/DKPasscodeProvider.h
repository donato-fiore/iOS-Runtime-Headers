// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKPASSCODEPROVIDER_H
#define DKPASSCODEPROVIDER_H

@class NSString;
@protocol DKPasscodeProvider;

#import <Foundation/Foundation.h>


@interface DKPasscodeProvider : NSObject <DKPasscodeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDevicePasscodeSet;
-(BOOL)isScreenTimePasscodeSet;
-(BOOL)verifyPasscode:(id)arg0 ;
-(BOOL)verifyScreenTimePasscode:(id)arg0 ;
-(int)simplePasscodeType;
-(int)unlockType;


@end


#endif