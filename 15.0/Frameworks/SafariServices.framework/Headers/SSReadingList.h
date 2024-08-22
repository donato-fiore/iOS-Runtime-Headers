// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSREADINGLIST_H
#define SSREADINGLIST_H

@class WebBookmarksXPCConnection;

#import <Foundation/Foundation.h>


@interface SSReadingList : NSObject {
    WebBookmarksXPCConnection *_connection;
}




+(BOOL)supportsURL:(id)arg0 ;
+(id)defaultReadingList;
-(BOOL)_addReadingListItemWithURL:(id)arg0 title:(id)arg1 previewText:(id)arg2 ;
-(BOOL)addReadingListItemWithURL:(id)arg0 title:(id)arg1 previewText:(id)arg2 error:(*id)arg3 ;
-(id)_init;
-(id)init;
-(void)_setUpConnectionIfNeeded;


@end


#endif