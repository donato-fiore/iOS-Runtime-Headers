// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSIGNEDSHORTCUTFILEPROVIDER_H
#define WFSIGNEDSHORTCUTFILEPROVIDER_H

@class WFShortcutPackageFile, WFFileRepresentation;


#import "WFWorkflowItemProvider.h"

@interface WFSignedShortcutFileProvider : WFWorkflowItemProvider

@property (retain, nonatomic) WFShortcutPackageFile *shortcutFile; // ivar: _shortcutFile
@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile; // ivar: _signedShortcutFile


-(id)initWithWorkflow:(id)arg0 userInterface:(id)arg1 ;
-(id)item;


@end


#endif