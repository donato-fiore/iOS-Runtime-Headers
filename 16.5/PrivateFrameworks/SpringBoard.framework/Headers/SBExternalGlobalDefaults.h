// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALGLOBALDEFAULTS_H
#define SBEXTERNALGLOBALDEFAULTS_H

@class BSAbstractDefaultDomain, NSArray, NSString;



@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSArray *keyboards;
@property (retain, nonatomic) NSArray *languages;
@property (retain, nonatomic) NSString *locale;


+(BOOL)__useDynamicMethodResolution;
-(id)init;
-(void)flushExternalCaches;
-(void)removeFormattedPhoneNumberFromGlobalPreferences;


@end


#endif