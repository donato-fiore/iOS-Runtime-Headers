// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDENCRYPTEDARCHIVE_H
#define HDENCRYPTEDARCHIVE_H


#import <Foundation/Foundation.h>


@interface HDEncryptedArchive : NSObject {
    *AEAContext_impl _context;
    *AAByteStream_impl _fileStream;
    *AAByteStream_impl _byteStream;
    NSInteger _mode;
}




+(BOOL)encryptContentsOfFileHandle:(id)arg0 to:(id)arg1 key:(id)arg2 error:(*id)arg3 ;
+(id)archiveForDecryptionWithFileHandle:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)archiveForEncryptionWithFileHandle:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)randomSymmetricKeyWithError:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(id)initWithContext:(struct AEAContext_impl *)arg0 fileStream:(struct AAByteStream_impl *)arg1 byteStream:(struct AAByteStream_impl *)arg2 mode:(NSInteger)arg3 ;
-(id)readDataOfLength:(NSInteger)arg0 offset:(NSInteger)arg1 error:(*id)arg2 ;
-(void)close;
-(void)dealloc;


@end


#endif