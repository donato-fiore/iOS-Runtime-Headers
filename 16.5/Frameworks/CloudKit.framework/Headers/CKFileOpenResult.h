// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFILEOPENRESULT_H
#define CKFILEOPENRESULT_H

@class NSFileHandle, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKFileOpenResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSFileHandle *encryptedFileHandle; // ivar: _encryptedFileHandle
@property (readonly, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, copy, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (readonly, nonatomic) *_mkbbackupref handle; // ivar: _handle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileHandle:(id)arg0 fileSize:(id)arg1 ;
-(id)initWithMobileKeyBagHandle:(struct _mkbbackupref *)arg0 path:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif