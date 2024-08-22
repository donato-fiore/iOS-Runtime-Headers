// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSATTACHMENT_H
#define _PSATTACHMENT_H

@class NSString, NSUUID, NSURL, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSAttachment : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *UTI; // ivar: _UTI
@property (readonly, copy, nonatomic) NSUUID *cloudIdentifier; // ivar: _cloudIdentifier
@property (readonly, copy, nonatomic) NSString *contentText; // ivar: _contentText
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *photoLocalIdentifier; // ivar: _photoLocalIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCreationDate:(id)arg0 UTI:(id)arg1 photoLocalIdentifier:(id)arg2 identifier:(id)arg3 cloudIdentifier:(id)arg4 contentURL:(id)arg5 contentText:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif