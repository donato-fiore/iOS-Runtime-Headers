// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFBASESETTINGS_H
#define CLFBASESETTINGS_H

@class AXBaseSettings, NSMutableDictionary;



@interface CLFBaseSettings : AXBaseSettings {
    NSMutableDictionary *_preferenceKeysBySelectorName;
}




+(id)allPreferenceSelectorsAsStrings;
+(id)domainName;
+(void)deleteAllKeys;
-(id)domainNameForPreferenceKey:(id)arg0 ;
-(id)init;
-(id)observeUpdatesForSelector:(SEL)arg0 handler:(id)arg1 ;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
// -(void)registerUpdateBlock:(id)arg0 withListener:(unk)arg1  ;


@end


#endif