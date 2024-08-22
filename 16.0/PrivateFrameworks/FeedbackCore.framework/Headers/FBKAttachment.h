// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKATTACHMENT_H
#define FBKATTACHMENT_H

@class DEDAttachmentGroup, DEDAttachmentItem, NSString, DEDExtension, NSURL;
@protocol FBKDiffableObject;

#import <Foundation/Foundation.h>

#import "FBKMatcherPredicate.h"
#import "FBKURLExtension.h"

@interface FBKAttachment : NSObject <FBKDiffableObject>



@property (retain, nonatomic) DEDAttachmentGroup *attachedGroup; // ivar: _attachedGroup
@property (retain, nonatomic) DEDAttachmentItem *attachedItem; // ivar: _attachedItem
@property (nonatomic) NSInteger attachmentType; // ivar: _attachmentType
@property (readonly, nonatomic) NSString *collectorIdentifier; // ivar: _collectorIdentifier
@property (retain, nonatomic) NSString *deviceUUID; // ivar: _deviceUUID
@property (retain, nonatomic) DEDExtension *extension; // ivar: _extension
@property (nonatomic) BOOL fileComesFromFBK; // ivar: _fileComesFromFBK
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *instructionsAsHTML;
@property (retain, nonatomic) NSURL *originalLocalFileURL; // ivar: _originalLocalFileURL
@property (retain, nonatomic) NSString *placeholderText; // ivar: _placeholderText
@property (retain, nonatomic) NSString *proposedFileNameForLocalFiles; // ivar: _proposedFileNameForLocalFiles
@property (retain, nonatomic) FBKMatcherPredicate *requirement; // ivar: _requirement
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly) NSString *uniqueIdentifier;
@property (retain, nonatomic) FBKURLExtension *urlExtension; // ivar: _urlExtension
@property (readonly, nonatomic) BOOL wasAttachedByApplication;


-(BOOL)canBeDeleted;
-(BOOL)canStartGathering;
-(BOOL)hasFBKFileReadyForSubmission;
-(BOOL)hasFiles;
-(BOOL)hasGroup;
-(BOOL)isAdditional;
-(BOOL)isCollecting;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocal;
-(BOOL)isReadyToDisplayContents;
-(BOOL)isRequired;
-(BOOL)shouldAutoGather;
-(id)description;
-(id)diffableHashWithContext:(id)arg0 ;
-(id)displayName;
-(id)group;
-(id)initWithCollectorIdentifier:(id)arg0 deviceUUID:(id)arg1 ;
-(id)initWithRequirement:(id)arg0 urlExtension:(id)arg1 collectorIdentifier:(id)arg2 deviceUUID:(id)arg3 ;
-(id)item;
-(id)promisedFileName;
-(id)shortDescription;
-(void)remove;
-(void)setGroup:(id)arg0 ;
-(void)setItem:(id)arg0 originalURL:(id)arg1 ;


@end


#endif