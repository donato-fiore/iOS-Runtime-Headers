// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDATTACHMENT_H
#define _CDATTACHMENT_H

@class NSUUID, NSString, NSURL, NSDate, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSUUID *cloudIdentifier; // ivar: _cloudIdentifier
@property (retain) NSString *contentText; // ivar: _contentText
@property (retain) NSURL *contentURL; // ivar: _contentURL
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (retain) NSString *photoLocalIdentifier; // ivar: _photoLocalIdentifier
@property (retain) NSNumber *size; // ivar: _size
@property (retain) NSString *uti; // ivar: _uti


+(BOOL)supportsSecureCoding;
+(id)attachmentWithIdentifier:(id)arg0 cloudIdentifier:(id)arg1 type:(id)arg2 sizeInBytes:(id)arg3 creationDate:(id)arg4 ;
+(id)attachmentWithIdentifier:(id)arg0 cloudIdentifier:(id)arg1 type:(id)arg2 sizeInBytes:(id)arg3 creationDate:(id)arg4 contentURL:(id)arg5 contentText:(id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 cloudIdentifier:(id)arg1 photoLocalIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 cloudIdentifier:(id)arg1 type:(id)arg2 sizeInBytes:(id)arg3 creationDate:(id)arg4 contentURL:(id)arg5 contentText:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif