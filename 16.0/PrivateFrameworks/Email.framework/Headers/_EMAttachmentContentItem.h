// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EMATTACHMENTCONTENTITEM_H
#define _EMATTACHMENTCONTENTITEM_H

@class NSArray, NSString, UTType;
@protocol EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding;


#import "EMObject.h"
#import "EMMailDropMetadata.h"
#import "EMObjectID.h"

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding>



@property (copy, nonatomic) NSArray *availableRepresentations; // ivar: _availableRepresentations
@property (copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (nonatomic) NSInteger dataTransferByteCount; // ivar: _dataTransferByteCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) int exchangeEventUID; // ivar: _exchangeEventUID
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAvailableLocally; // ivar: _isAvailableLocally
@property (copy, nonatomic) id *loaderBlock; // ivar: _loaderBlock
@property (copy, nonatomic) EMMailDropMetadata *mailDropMetadata; // ivar: _mailDropMetadata
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (nonatomic) NSInteger storageByteCount; // ivar: _storageByteCount
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)requestRepresentationWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(id)requestRepresentationWithOptions:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif