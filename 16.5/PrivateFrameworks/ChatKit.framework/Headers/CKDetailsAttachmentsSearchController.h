// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSATTACHMENTSSEARCHCONTROLLER_H
#define CKDETAILSATTACHMENTSSEARCHCONTROLLER_H



#import "CKAttachmentsSearchController.h"
#import "CKAttachmentSearchResultCell.h"

@interface CKDetailsAttachmentsSearchController : CKAttachmentsSearchController

@property (retain, nonatomic) CKAttachmentSearchResultCell *sizingCell; // ivar: _sizingCell


+(id)sectionIdentifier;
-(id)layoutGroupWithEnvironment:(id)arg0 ;


@end


#endif