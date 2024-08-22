// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMFILEATTACHMENT_H
#define REMFILEATTACHMENT_H

@class NSURL;


#import "REMAttachment.h"

@interface REMFileAttachment : REMAttachment

@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL isTemporaryFileURL; // ivar: _isTemporaryFileURL


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)createTemporaryFileURLWithUTI:(id)arg0 ;
+(id)createTemporaryFileWithData:(id)arg0 UTI:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_deepCopy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 UTI:(id)arg3 fileSize:(NSUInteger)arg4 fileURL:(id)arg5 data:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif