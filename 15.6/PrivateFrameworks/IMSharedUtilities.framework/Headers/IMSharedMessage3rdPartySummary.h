// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSHAREDMESSAGE3RDPARTYSUMMARY_H
#define IMSHAREDMESSAGE3RDPARTYSUMMARY_H



#import "IMSharedMessageAppSummary.h"

@interface IMSharedMessage3rdPartySummary : IMSharedMessageAppSummary



+(id)_appNameSummary:(id)arg0 ;
+(id)_displayNameWithID:(id)arg0 ;
+(id)_handleIdentifierRegex;
+(id)_handleIdentifiers:(id)arg0 ;
+(id)_idForHandleIdentifier:(id)arg0 ;
+(id)_individualPreviewSummary:(id)arg0 ;
+(id)_replaceHandleWithContactNameInString:(id)arg0 ;
+(id)pluginPath;
+(id)previewSummaryWithPluginPayload:(id)arg0 ;


@end


#endif