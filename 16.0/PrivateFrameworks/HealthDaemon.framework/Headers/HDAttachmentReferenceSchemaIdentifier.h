// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDATTACHMENTREFERENCESCHEMAIDENTIFIER_H
#define HDATTACHMENTREFERENCESCHEMAIDENTIFIER_H

@class NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDAttachmentReferenceSchemaIdentifier : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSUUID *attachmentIdentifier; // ivar: _attachmentIdentifier
@property (readonly, copy, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, copy, nonatomic) NSString *schemaIdentifier; // ivar: _schemaIdentifier
@property (readonly, nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion


+(id)tombstoneSchemaIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSchemaIdentifier:(id)arg0 schemaVersion:(NSInteger)arg1 objectIdentifier:(id)arg2 attachmentIdentifier:(id)arg3 ;


@end


#endif