// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMMAILDROPMETADATA_H
#define EMMAILDROPMETADATA_H

@class NSString, NSURL, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMMailDropMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (nonatomic) BOOL autoArchive; // ivar: _autoArchive
@property (retain, nonatomic) NSURL *directUrl; // ivar: _directUrl
@property (retain, nonatomic) NSDate *expiration; // ivar: _expiration
@property (copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) BOOL isInvalid; // ivar: _isInvalid
@property (copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSURL *wrappedUrl; // ivar: _wrappedUrl


+(BOOL)supportsSecureCoding;
+(id)mailDropMetadata;
-(BOOL)isBanner;
-(BOOL)isBannerWithMultiple;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpired;
-(BOOL)isPhotoArchive;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)merge:(id)arg0 ;


@end


#endif