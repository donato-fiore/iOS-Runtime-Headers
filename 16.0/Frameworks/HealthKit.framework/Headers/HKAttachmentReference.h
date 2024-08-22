// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKATTACHMENTREFERENCE_H
#define HKATTACHMENTREFERENCE_H

@class NSDate, NSUUID, NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKAttachment.h"

@interface HKAttachmentReference : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy) HKAttachment *attachment; // ivar: _attachment
@property (readonly, copy) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy) NSString *objectIdentifier; // ivar: _objectIdentifier


+(BOOL)supportsSecureCoding;
-(id)_initWithIdentifier:(id)arg0 objectIdentifier:(id)arg1 attachment:(id)arg2 creationDate:(id)arg3 metadata:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif