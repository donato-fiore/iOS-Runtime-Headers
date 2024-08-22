// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDMMCSENCRYPTEDITEMREADER_H
#define CKDMMCSENCRYPTEDITEMREADER_H

@class NSString;
@protocol CKDMMCSItemReaderWriterProtocol;

#import <Foundation/Foundation.h>

#import "CKDMMCSItem.h"
#import "CKDMMCSItemGroupContext.h"

@interface CKDMMCSEncryptedItemReader : NSObject <CKDMMCSItemReaderWriterProtocol>



@property (retain, nonatomic) CKDMMCSItem *MMCSItem; // ivar: _MMCSItem
@property (retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // ivar: _MMCSRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *_mkbbackupref handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)readBytesAtOffset:(NSUInteger)arg0 bytes:(char *)arg1 length:(NSUInteger)arg2 bytesRead:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)writeBytesAtOffset:(NSUInteger)arg0 bytes:(char *)arg1 length:(NSUInteger)arg2 bytesWritten:(*NSUInteger)arg3 error:(*id)arg4 ;
-(id)getFileMetadataWithError:(*id)arg0 ;
-(id)initWithMMCSItem:(id)arg0 MMCSRequest:(id)arg1 ;
-(void)dealloc;


@end


#endif