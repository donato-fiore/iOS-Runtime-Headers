// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDAREQUESTQUEUE_H
#define MFDAREQUESTQUEUE_H

@class NSString;


#import "MFRequestQueue.h"
#import "DAMailAccount.h"

@interface MFDARequestQueue : MFRequestQueue {
    DAMailAccount *_account;
    NSString *_folderID;
}




-(BOOL)processRequests:(id)arg0 ;
-(id)filterRequests:(id)arg0 ;
-(id)initWithAccount:(id)arg0 folderID:(id)arg1 ;


@end


#endif