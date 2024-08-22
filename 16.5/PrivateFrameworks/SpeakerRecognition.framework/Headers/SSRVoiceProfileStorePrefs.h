// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRVOICEPROFILESTOREPREFS_H
#define SSRVOICEPROFILESTOREPREFS_H


#import <Foundation/Foundation.h>


@interface SSRVoiceProfileStorePrefs : NSObject



+(id)sharedStorePrefs;
-(NSInteger)getVoiceProfileStoreVersion;
-(id)loadKnownUserVoiceProfiles;
-(void)saveKnownUserVoiceProfiles:(id)arg0 ;
-(void)setVoiceProfileStoreVersion:(NSUInteger)arg0 ;


@end


#endif