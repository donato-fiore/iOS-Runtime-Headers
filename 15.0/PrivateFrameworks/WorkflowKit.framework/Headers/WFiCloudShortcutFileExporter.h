// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFICLOUDSHORTCUTFILEEXPORTER_H
#define WFICLOUDSHORTCUTFILEEXPORTER_H

@class WFFileRepresentation;


#import "WFShortcutExporter.h"

@interface WFiCloudShortcutFileExporter : WFShortcutExporter

@property (retain, nonatomic) WFFileRepresentation *signedShortcutFile; // ivar: _signedShortcutFile


-(void)exportWorkflowWithCompletion:(id)arg0 ;


@end


#endif