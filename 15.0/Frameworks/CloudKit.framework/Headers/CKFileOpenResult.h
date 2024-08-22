// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFILEOPENRESULT_H
#define CKFILEOPENRESULT_H

@class NSFileHandle, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKFileOpenResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSFileHandle *encryptedFileHandle; // ivar: _encryptedFileHandle
@property (retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (retain, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (nonatomic) *_mkbbackupref handle; // ivar: _handle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMobileKeyBagHandle:(struct _mkbbackupref *)arg0 path:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif