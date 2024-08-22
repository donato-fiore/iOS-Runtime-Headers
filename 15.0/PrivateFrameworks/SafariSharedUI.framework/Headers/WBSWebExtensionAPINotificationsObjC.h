// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPINOTIFICATIONSOBJC_H
#define WBSWEBEXTENSIONAPINOTIFICATIONSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPINotificationsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onButtonClicked;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onClicked;


+(id)notificationsWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;


@end


#endif