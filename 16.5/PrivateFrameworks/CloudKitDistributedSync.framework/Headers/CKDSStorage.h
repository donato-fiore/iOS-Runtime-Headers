// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSSTORAGE_H
#define CKDSSTORAGE_H

@class NSData, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKDSStorageFile.h"

@interface CKDSStorage : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) CKDSStorageFile *file; // ivar: _file
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL writable; // ivar: _writable


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)size:(*NSUInteger)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataWithError:(*id)arg0 ;
-(id)description;
-(id)initForWriting:(BOOL)arg0 withFile:(id)arg1 orData:(id)arg2 ;


@end


#endif