// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDATTACHMENTREFERENCE_H
#define HDATTACHMENTREFERENCE_H

@class NSUUID, NSDate, NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDAttachmentReference : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *attachmentIdentifier; // ivar: _attachmentIdentifier
@property (readonly, nonatomic) NSInteger cloudStatus; // ivar: _cloudStatus
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *schemaIdentifier; // ivar: _schemaIdentifier
@property (readonly, nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hkAttachmentReferenceWithAttachment:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 schemaIdentifier:(id)arg1 creationDate:(id)arg2 options:(NSInteger)arg3 metadata:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 schemaIdentifier:(id)arg1 creationDate:(id)arg2 options:(NSInteger)arg3 metadata:(id)arg4 type:(NSInteger)arg5 cloudStatus:(NSInteger)arg6 ;
-(id)referenceWithObjectIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif