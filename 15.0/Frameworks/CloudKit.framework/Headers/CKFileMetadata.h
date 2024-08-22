// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFILEMETADATA_H
#define CKFILEMETADATA_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKFileMetadata : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (retain, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (retain, nonatomic) NSNumber *modTimeInSeconds; // ivar: _modTimeInSeconds


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif