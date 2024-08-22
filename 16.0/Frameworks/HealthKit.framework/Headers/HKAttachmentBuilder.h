// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKATTACHMENTBUILDER_H
#define HKATTACHMENTBUILDER_H

@class NSDictionary, UTType, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "HKAttachmentStore.h"

@interface HKAttachmentBuilder : NSObject {
    HKAttachmentStore *_attachmentStore;
}


@property (copy, nonatomic) NSDictionary *attachmentMetadata; // ivar: _attachmentMetadata
@property (copy, nonatomic) UTType *contentType; // ivar: _contentType
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (copy, nonatomic) NSDictionary *referenceMetadata; // ivar: _referenceMetadata


-(id)initWithAttachmentStore:(id)arg0 ;
-(void)finishWithCompletion:(id)arg0 ;


@end


#endif