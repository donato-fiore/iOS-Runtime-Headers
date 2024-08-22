// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBREADINGLISTPRIVATE_H
#define WBREADINGLISTPRIVATE_H


#import <Foundation/Foundation.h>

#import "WebBookmarksXPCConnection.h"

@interface WBReadingListPrivate : NSObject {
    WebBookmarksXPCConnection *_connection;
}




-(id)init;
-(void)_addReadingListItemWithURL:(id)arg0 title:(id)arg1 previewText:(id)arg2 ;


@end


#endif