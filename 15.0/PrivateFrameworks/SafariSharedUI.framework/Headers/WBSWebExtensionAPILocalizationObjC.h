// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPILOCALIZATIONOBJC_H
#define WBSWEBEXTENSIONAPILOCALIZATIONOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionLocalization.h"

@interface WBSWebExtensionAPILocalizationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionLocalization *_localization;
}


@property (readonly, nonatomic) *void cpp;


+(id)localizationWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;
-(id)getMessageWithName:(id)arg0 substitutions:(id)arg1 ;
-(id)getUILanguage;
-(void)getAcceptLanguagesWithCompletionHandler:(id)arg0 ;
-(void)initWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;


@end


#endif