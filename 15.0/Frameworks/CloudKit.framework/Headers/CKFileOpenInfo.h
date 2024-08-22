// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFILEOPENINFO_H
#define CKFILEOPENINFO_H

@class NSString, NSFileHandle, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKFileOpenInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain, nonatomic) NSFileHandle *clientOpenedFileHandle; // ivar: _clientOpenedFileHandle
@property (retain, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (retain, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) BOOL shouldReadRawEncryptedData; // ivar: _shouldReadRawEncryptedData


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif