// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCDENCRYPTEDREADER_H
#define OCDENCRYPTEDREADER_H



#import "OCDReader.h"
#import "OCCDecryptor.h"

@interface OCDEncryptedReader : OCDReader

@property (readonly, nonatomic) OCCDecryptor *decryptor; // ivar: mDecryptor


-(BOOL)retainDecryptorWithErrorCode:(*int)arg0 ;
-(id)defaultPassphrase;
-(void)restartReaderToUseDecryptedDocument;
-(void)useUnencryptedDocument;


@end


#endif