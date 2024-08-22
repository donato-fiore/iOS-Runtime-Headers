// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCSESSIONFILE_H
#define WCSESSIONFILE_H

@class NSDate, NSString, NSNumber, NSURL, NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WCUserInfo.h"

@interface WCSessionFile : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy) NSString *fileIdentifier; // ivar: _fileIdentifier
@property (copy, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *relativePath; // ivar: _relativePath
@property (readonly, copy) NSData *userInfoData;
@property (retain, nonatomic) WCUserInfo *userInfoStorage; // ivar: _userInfoStorage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateUserInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateUserInfoData:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyMetadata;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 fileURL:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 relativePath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif