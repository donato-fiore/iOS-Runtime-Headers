// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSAPPLEACCOUNTINFORMATIONPROVIDER_H
#define WBSAPPLEACCOUNTINFORMATIONPROVIDER_H

@class NSString;
@protocol WBSAppleAccountInformationProviding;

#import <Foundation/Foundation.h>


@interface WBSAppleAccountInformationProvider : NSObject <WBSAppleAccountInformationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isSafariSyncEnabled;
@property (readonly) Class superclass;


-(NSInteger)appleAccountSecurityState;
-(NSUInteger)_primaryAppleAccountSecurityLevel;
-(void)getAppleAccountSecurityStateWithCompletion:(id)arg0 ;


@end


#endif