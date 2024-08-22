// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSETTINGS_H
#define PHSETTINGS_H

@class UISettings;



@interface PHSettings : UISettings



+(id)_defaultsKey;
+(id)_signatureDictionary;
+(id)_userDefaults;
+(id)createSharedSettings;
+(id)sharedSettings;
+(id)suiteName;
+(void)setSuiteName:(id)arg0 ;
-(id)parentSettings;
-(void)save;


@end


#endif