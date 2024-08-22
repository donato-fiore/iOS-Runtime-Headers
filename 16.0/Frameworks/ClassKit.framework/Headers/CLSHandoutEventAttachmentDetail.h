// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSHANDOUTEVENTATTACHMENTDETAIL_H
#define CLSHANDOUTEVENTATTACHMENTDETAIL_H

@class NSString;


#import "CLSObject.h"

@interface CLSHandoutEventAttachmentDetail : CLSObject

@property (readonly, nonatomic) NSString *attachmentID; // ivar: _attachmentID
@property (readonly, nonatomic) NSInteger contextType; // ivar: _contextType
@property (readonly, nonatomic) int handoutAttachmentType; // ivar: _handoutAttachmentType


+(BOOL)supportsSecureCoding;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithAttachmentID:(id)arg0 handoutAttachmentType:(int)arg1 contextType:(NSInteger)arg2 appIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif