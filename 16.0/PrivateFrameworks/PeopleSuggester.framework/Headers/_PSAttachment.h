// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSATTACHMENT_H
#define _PSATTACHMENT_H

@class NSString, NSUUID, NSURL, NSDate, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSAttachment : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *UTI; // ivar: _UTI
@property (readonly, copy, nonatomic) NSUUID *cloudIdentifier; // ivar: _cloudIdentifier
@property (readonly, copy, nonatomic) NSString *contentText; // ivar: _contentText
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSString *photoLocalIdentifier; // ivar: _photoLocalIdentifier
@property (readonly, copy, nonatomic) NSArray *photoLocalIdentifiers; // ivar: _photoLocalIdentifiers
@property (readonly, copy, nonatomic) NSArray *suggestedContactIdentifiers; // ivar: _suggestedContactIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)totalHashOfElementsFromArray:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCreationDate:(id)arg0 UTI:(id)arg1 photoLocalIdentifier:(id)arg2 identifier:(id)arg3 cloudIdentifier:(id)arg4 contentURL:(id)arg5 contentText:(id)arg6 ;
-(id)initWithCreationDate:(id)arg0 UTI:(id)arg1 photoLocalIdentifier:(id)arg2 identifier:(id)arg3 cloudIdentifier:(id)arg4 contentURL:(id)arg5 contentText:(id)arg6 imageData:(id)arg7 ;
-(id)initWithCreationDate:(id)arg0 UTI:(id)arg1 photoLocalIdentifier:(id)arg2 identifier:(id)arg3 cloudIdentifier:(id)arg4 contentURL:(id)arg5 contentText:(id)arg6 imageData:(id)arg7 photoLocalIdentifiers:(id)arg8 suggestedContactIdentifiers:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif