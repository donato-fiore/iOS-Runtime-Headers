// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONAPILOCALIZATIONOBJC_H
#define WBSWEBEXTENSIONAPILOCALIZATIONOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionLocalization.h"

@interface WBSWebExtensionAPILocalizationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionLocalization *_localization;
}




-(void)initWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 ;


@end


#endif