// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFATTACHMENTCOMPOSITIONCONTEXT_H
#define MFATTACHMENTCOMPOSITIONCONTEXT_H

@class NSMutableDictionary, NSArray, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "MFAttachmentManager.h"

@interface MFAttachmentCompositionContext : NSObject {
    NSMutableDictionary *_hostIdentifierToAttachmentContentIDMap;
}


@property (readonly, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSURL *attachmentsBaseURL; // ivar: _attachmentsBaseURL
@property (retain, nonatomic) MFAttachmentManager *attachmentsManager; // ivar: _attachmentsManager
@property (readonly, nonatomic) NSString *contextID; // ivar: _contextID


-(id)attachmentForHostIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithContextID:(id)arg0 ;
-(void)dealloc;
-(void)setHostIdentifier:(id)arg0 forAttachment:(id)arg1 ;


@end


#endif