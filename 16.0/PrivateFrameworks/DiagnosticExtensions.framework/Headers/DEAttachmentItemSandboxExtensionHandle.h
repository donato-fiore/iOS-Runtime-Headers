// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEATTACHMENTITEMSANDBOXEXTENSIONHANDLE_H
#define DEATTACHMENTITEMSANDBOXEXTENSIONHANDLE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface DEAttachmentItemSandboxExtensionHandle : NSObject

@property (readonly) NSInteger _handle; // ivar: __handle
@property (nonatomic) BOOL didInit; // ivar: _didInit
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL


-(id)initWithSandboxExtensionToken:(id)arg0 itemURL:(id)arg1 errorOut:(*id)arg2 ;
-(void)dealloc;


@end


#endif