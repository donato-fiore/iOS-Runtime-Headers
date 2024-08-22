// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPICOMMANDSOBJC_H
#define WBSWEBEXTENSIONAPICOMMANDSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPICommandsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onCommand;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onCommand;


+(id)commandsWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)getAllWithCompletionHandler:(id)arg0 ;


@end


#endif