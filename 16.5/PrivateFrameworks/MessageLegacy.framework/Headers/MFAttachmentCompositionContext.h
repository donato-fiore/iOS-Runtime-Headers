// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTCOMPOSITIONCONTEXT_H
#define MFATTACHMENTCOMPOSITIONCONTEXT_H

@class NSArray, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface MFAttachmentCompositionContext : NSObject

@property (readonly, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSURL *attachmentsBaseURL; // ivar: _attachmentsBaseURL
@property (readonly, nonatomic) NSString *contextID; // ivar: _contextID


-(id)init;
-(id)initWithContextID:(id)arg0 ;
-(void)dealloc;


@end


#endif