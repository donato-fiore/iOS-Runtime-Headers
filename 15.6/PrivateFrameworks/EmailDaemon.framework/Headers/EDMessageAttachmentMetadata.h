// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDMESSAGEATTACHMENTMETADATA_H
#define EDMESSAGEATTACHMENTMETADATA_H

@class NSNumber, NSString, NSURL;
@protocol EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface EDMessageAttachmentMetadata : NSObject <EFPubliclyDescribable>



@property (retain, nonatomic) NSNumber *attachmentID; // ivar: _attachmentID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) NSInteger globalMessageID; // ivar: _globalMessageID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *mimePartNumber; // ivar: _mimePartNumber
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (readonly) Class superclass;


-(id)initWithGlobalMessageID:(NSInteger)arg0 attachmentID:(id)arg1 ;
-(id)initWithGlobalMessageID:(NSInteger)arg0 name:(id)arg1 mimePart:(id)arg2 attachmentID:(id)arg3 remoteURL:(id)arg4 ;


@end


#endif