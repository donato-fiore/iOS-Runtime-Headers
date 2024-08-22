// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15PREVIEWSHELLKIT16LISTENERDELEGATE_H
#define _TTC15PREVIEWSHELLKIT16LISTENERDELEGATE_H

@protocol BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC15PreviewShellKit16ListenerDelegate : NSObject <BSServiceConnectionListenerDelegate>

 {
    ? connectionHandler;
}




-(id)init;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif