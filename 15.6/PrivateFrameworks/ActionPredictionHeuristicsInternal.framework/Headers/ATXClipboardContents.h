// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCLIPBOARDCONTENTS_H
#define ATXCLIPBOARDCONTENTS_H

@class PBServerConnection;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXClipboardContents : NSObject {
    ATXHeuristicDevice *_device;
    PBServerConnection *_pasteboardServerConnection;
}




+(void)_observeLocalPasteboard;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 pasteboardConnection:(id)arg1 ;
-(void)contentsWithCallback:(id)arg0 ;


@end


#endif