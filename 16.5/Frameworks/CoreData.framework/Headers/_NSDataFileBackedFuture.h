// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSDATAFILEBACKEDFUTURE_H
#define _NSDATAFILEBACKEDFUTURE_H

@class NSData, NSURL, NSUUID;
@protocol _NSFileBackedFuture, NSSecureCoding;



@interface _NSDataFileBackedFuture : NSData <_NSFileBackedFuture, NSSecureCoding>

 {
    NSURL *_fileURL;
    NSURL *_originalFileURL;
    NSData *_realData;
    NSData *_bytes;
}


@property (readonly) NSUUID *UUID; // ivar: _uuid
@property (readonly) NSUInteger fileSize; // ivar: _fileSize
@property (readonly) NSURL *fileURL;


+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
-(*void)_bytesPtrForStore;
-(*void)bytes;
-(BOOL)_isCloudKitSupportOriginated;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)_bytesLengthForStore;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreMetadata:(id)arg0 directory:(id)arg1 ;
-(id)initWithStoreMetadata:(id)arg0 directory:(id)arg1 originalFileURL:(id)arg2 ;
-(void)_copyToInterimLocation;
-(void)_moveToPermanentLocation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif