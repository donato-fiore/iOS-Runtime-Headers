// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTSEALABLEFILE_H
#define ASTSEALABLEFILE_H

@class NSURL, NSString, NSData;

#import <Foundation/Foundation.h>


@interface ASTSealableFile : NSObject {
    NSURL *_fileURL;
}


@property (retain, nonatomic) NSString *base64Signature; // ivar: _base64Signature
@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic, getter=isSealed) BOOL sealed; // ivar: _sealed
@property (retain, nonatomic) NSData *signature; // ivar: _signature


+(id)sealedFileURL:(id)arg0 signature:(id)arg1 ;
// -(BOOL)sealWithFileSigner:(id)arg0 error:(unk)arg1  ;
-(id)initWithFileURL:(id)arg0 signature:(id)arg1 ;


@end


#endif