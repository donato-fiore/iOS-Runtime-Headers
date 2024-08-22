// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIRMWAREBUNDLE_H
#define FIRMWAREBUNDLE_H

@class NSString, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface FirmwareBundle : NSObject {
    NSString *_bundleDescription;
}


@property (retain, nonatomic) NSDictionary *buildManifest; // ivar: _buildManifest
@property (readonly) NSData *certificate; // ivar: _certificate
@property (readonly) NSData *firmwareImage; // ivar: _firmwareImage
@property (readonly) unsigned int firmwareImageBaseAddress; // ivar: _firmwareImageBaseAddress
@property (readonly) unsigned int firmwareImageSize; // ivar: _firmwareImageSize
@property (readonly) NSData *hash; // ivar: _hash
@property unsigned int productIDCode; // ivar: _productIDCode
@property (readonly) NSData *signature; // ivar: _signature


+(id)defaultBundlePath;
-(id)description;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithBundleName:(id)arg0 ;
-(id)initWithBundlePath:(id)arg0 ;
-(id)initWithData:(id)arg0 hashData:(id)arg1 signatureData:(id)arg2 certData:(id)arg3 ;
-(id)parseMSP430TXTFile:(id)arg0 withDefaultByteValue:(unsigned char)arg1 ;
-(id)parseResourceFileIntoData:(id)arg0 ;
-(id)parseSRECFile:(id)arg0 withDefaultByteValue:(unsigned char)arg1 ;
-(void)calculateHash;
-(void)dealloc;
-(void)parseFileName:(id)arg0 intoPath:(*id)arg1 andExtension:(*id)arg2 ;
-(void)parseSRECLine:(id)arg0 intoImage:(id)arg1 ;


@end


#endif