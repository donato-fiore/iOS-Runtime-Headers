// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONVERSATIONACTIVITYMETADATA_H
#define TUCONVERSATIONACTIVITYMETADATA_H

@class NSString, NSURL, NSData;
@protocol TUSanitizedCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationActivityContext.h"
#import "TUSandboxExtendedURL.h"
#import "TUConversationActivitySceneAssociationBehavior.h"

@interface TUConversationActivityMetadata : NSObject <TUSanitizedCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) TUConversationActivityContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *fallbackURL; // ivar: _fallbackURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) TUSandboxExtendedURL *imageFileURL; // ivar: _imageFileURL
@property (readonly, copy, nonatomic) NSURL *invitationURL; // ivar: _invitationURL
@property (readonly) NSUInteger length;
@property (copy, nonatomic) NSData *linkMetadatablob; // ivar: _linkMetadatablob
@property (nonatomic) NSInteger preferredBroadcastingAttributes; // ivar: _preferredBroadcastingAttributes
@property (readonly, copy, nonatomic) TUConversationActivitySceneAssociationBehavior *sceneAssociationBehavior; // ivar: _sceneAssociationBehavior
@property (readonly, copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsContinuationOnTV; // ivar: _supportsContinuationOnTV
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)activityMetadataWithDataBlob:(id)arg0 ;
-(BOOL)_createImageFolderIfNeeded;
-(BOOL)_isEqualToActivityMetadata:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToActivityMetadata:(id)arg0 ;
-(id)_filePathForImage;
-(id)_imagePreviewDirectoryPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 linkMetadata:(id)arg1 fallbackURL:(id)arg2 invitationURL:(id)arg3 supportsContinuationOnTV:(BOOL)arg4 title:(id)arg5 subTitle:(id)arg6 imageData:(id)arg7 ;
-(id)initWithContext:(id)arg0 linkMetadata:(id)arg1 fallbackURL:(id)arg2 invitationURL:(id)arg3 supportsContinuationOnTV:(BOOL)arg4 title:(id)arg5 subTitle:(id)arg6 imageData:(id)arg7 preferredBroadcastingAttributes:(NSInteger)arg8 sceneAssociationBehavior:(id)arg9 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(id)serializedData;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeImageDiskFile;
-(void)saveImageToDisk;


@end


#endif