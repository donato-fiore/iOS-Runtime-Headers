// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFOUNDATIONUSERDEFAULTS_H
#define CNFOUNDATIONUSERDEFAULTS_H

@class NSString, NSDictionary;
@protocol CNFoundationUserDefaults;

#import <Foundation/Foundation.h>

#import "CNUserDefaults.h"

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;
@property (readonly) NSUInteger hash;
@property NSUInteger nameOrder;
@property BOOL preferNickname;
@property NSUInteger shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (readonly) Class superclass;
@property (retain) CNUserDefaults *userDefaults; // ivar: _userDefaults


+(NSUInteger)_convertNSNameOrderToCNNameOrder:(NSInteger)arg0 ;
+(id)makeRegisteredDefaults;
+(id)registeredDefaults;
+(id)sharedDefaults;
-(NSUInteger)newContactNameOrder;
-(NSUInteger)sortOrder;
-(id)countryCode;
-(id)init;


@end


#endif