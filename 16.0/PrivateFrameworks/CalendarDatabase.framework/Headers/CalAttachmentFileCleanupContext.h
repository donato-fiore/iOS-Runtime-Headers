// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALATTACHMENTFILECLEANUPCONTEXT_H
#define CALATTACHMENTFILECLEANUPCONTEXT_H

@class NSURL, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CalAttachmentFileCleanupContext : NSObject {
    NSURL *_storeAttachmentContainer;
    BOOL _deleteEntireContainer;
    NSMutableArray *_attachmentUUIDsToDelete;
}




-(?)initWithExternalID:(?)arg0 storeUUIDdatabase;
-(id)description;
-(id)initWithStore:(*void)arg0 ;
-(void)addAttachmentToDelete:(id)arg0 ;
-(void)cleanup;
-(void)markStoreAsDeleted;


@end


#endif