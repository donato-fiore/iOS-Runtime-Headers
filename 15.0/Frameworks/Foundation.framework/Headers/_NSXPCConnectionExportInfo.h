// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSXPCCONNECTIONEXPORTINFO_H
#define _NSXPCCONNECTIONEXPORTINFO_H


#import <Foundation/Foundation.h>

#import "NSXPCInterface.h"

@interface _NSXPCConnectionExportInfo : NSObject {
    id *_exportedObject;
    NSXPCInterface *_exportedInterface;
    NSInteger _exportCount;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif