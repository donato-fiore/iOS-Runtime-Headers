// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATAFILE_H
#define HKSIGNEDCLINICALDATAFILE_H

@class NSFileHandle, NSURL, NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataFile : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSDate *receivedDate; // ivar: _receivedDate
@property (readonly, copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
+(id)signedClinicalDataFileWithURL:(id)arg0 sourceURL:(id)arg1 receivedDate:(id)arg2 countryOfOrigin:(id)arg3 error:(*id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 fileHandle:(id)arg1 sourceURL:(id)arg2 receivedDate:(id)arg3 metadata:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif