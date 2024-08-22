// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFANNOUNCEWRAPPER_H
#define WFANNOUNCEWRAPPER_H

@class ANAnnounce;

#import <Foundation/Foundation.h>


@interface WFAnnounceWrapper : NSObject

@property (readonly, nonatomic) ANAnnounce *announce; // ivar: _announce


+(id)afPreferencesLanguageCode;
+(id)currentSiriVoiceVSAssetName;
+(id)sharedAnnouncementsDirectoryURL;
-(id)init;
-(void)invalidate;
-(void)prewarmWithHandler:(id)arg0 ;
-(void)requestAnnouncementWithAudioFileURL:(id)arg0 homeAreaDescriptor:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif