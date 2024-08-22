// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKATTACHMENTCOLLECTION_H
#define FBKATTACHMENTCOLLECTION_H

@class NSSet, NSArray, DEDBugSession, NSString;

#import <Foundation/Foundation.h>

#import "FBKAttachmentManager.h"
#import "FBKGroupedDevice.h"

@interface FBKAttachmentCollection : NSObject

@property (nonatomic, readonly) NSSet *additionalMatchers;
@property (retain, nonatomic) FBKAttachmentManager *attachmentManager; // ivar: _attachmentManager
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) DEDBugSession *bugSession;
@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) FBKGroupedDevice *device; // ivar: _device
@property (nonatomic, readonly) BOOL isRequired;
@property (nonatomic, readonly) NSUInteger state;


-(BOOL)hasAnyAttachmentCollectedOrCollecting;
-(BOOL)isAlreadyCollectingThisMatcher:(id)arg0 ignoreAdditional:(BOOL)arg1 ;
-(BOOL)replacePreviousAdditionalMatchersWithRequiredMatchersIfNeededWithRequired:(id)arg0 ;
-(id)initWithAttachmentManager:(id)arg0 device:(id)arg1 ;
-(id)updateMatcherPredicatesWithUpdatedMatchers:(id)arg0 allRequiredMatchers:(id)arg1 formPlatform:(id)arg2 ;
-(void)replaceEmptyAttachmentsWithAdditionalMatchersWithAdditional:(id)arg0 ;


@end


#endif