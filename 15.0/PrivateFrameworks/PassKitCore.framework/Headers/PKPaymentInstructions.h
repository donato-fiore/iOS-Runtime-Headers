// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTINSTRUCTIONS_H
#define PKPAYMENTINSTRUCTIONS_H

@class NSArray, NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKPaymentInstructions : NSObject

@property (readonly, nonatomic) NSArray *allImageKeys;
@property (retain, nonatomic) NSData *fortifiedInstructionsData; // ivar: _fortifiedInstructionsData
@property (retain, nonatomic) NSData *fortifiedSignatureData; // ivar: _fortifiedSignatureData
@property (retain, nonatomic) NSData *instructionsData; // ivar: _instructionsData
@property (retain, nonatomic) NSDictionary *instructionsDictionary; // ivar: _instructionsDictionary
@property (retain, nonatomic) NSData *signatureData; // ivar: _signatureData
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(BOOL)archiveToDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_imageDataForImageWithKey:(id)arg0 format:(*id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(struct CGDataProvider *)_createImageDataProviderForImageKey:(id)arg0 ;
-(struct CGImage *)imageForKey:(id)arg0 ;
-(void)_pruneDirectoryAtURL:(id)arg0 ;


@end


#endif