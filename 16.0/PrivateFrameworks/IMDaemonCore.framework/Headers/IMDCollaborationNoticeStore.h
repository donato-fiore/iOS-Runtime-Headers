// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCOLLABORATIONNOTICESTORE_H
#define IMDCOLLABORATIONNOTICESTORE_H


#import <Foundation/Foundation.h>


@interface IMDCollaborationNoticeStore : NSObject {
    ? $__lazy_storage_$_persistenceContainer;
}




-(id)deleteNotice:(id)arg0 ;
-(id)deleteNoticeWithGUIDString:(id)arg0 ;
-(id)init;
-(id)noticesForURLs:(id)arg0 ;
-(void)deleteNoticesForURLs:(id)arg0 ;
-(void)saveNotice:(id)arg0 ;


@end


#endif