// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESPFLENCRYPTOR_H
#define DESPFLENCRYPTOR_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface DESPFLEncryptor : NSObject {
    NSDictionary *_recipeUserInfo;
}


@property (readonly, nonatomic) BOOL pluginShouldAddNoiseAndEncryptResult;
@property (copy, nonatomic) NSString *privatizationIdentifier; // ivar: _privatizationIdentifier
@property (copy, nonatomic) id *privatizer; // ivar: _privatizer
@property (copy, nonatomic) id *privatizerWithCustomParameters; // ivar: _privatizerWithCustomParameters
@property (nonatomic) NSInteger version; // ivar: _version
@property (nonatomic) CGFloat weight; // ivar: _weight
@property (readonly, nonatomic) BOOL writeToSubmissionLogs; // ivar: _writeToSubmissionLogs


+(BOOL)privatizationSupported;
+(void)initialize;
-(id)_encryptedAndPrivatizedDataWithPublicKey:(id)arg0 separatedDPParameter:(id)arg1 inPlaceNumbers:(*float)arg2 count:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)_encryptedDataWithPublicKey:(id)arg0 inPlaceDataFloatNumbers:(*float)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_encryptedDataWithPublicKey:(id)arg0 noiseable:(id)arg1 error:(*id)arg2 ;
-(id)_newNoiseable;
-(id)_requestedTransport;
-(id)encryptAndPrivatizeDataWithRecipe:(id)arg0 numbers:(*float)arg1 count:(NSUInteger)arg2 inPlace:(BOOL)arg3 error:(*id)arg4 ;
-(id)encryptedAndPrivatizedDataWithPublicKey:(id)arg0 inPlaceNumbers:(*float)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encryptedAndPrivatizedDataWithPublicKey:(id)arg0 numbers:(*float)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encryptedDataWithPublicKey:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)encryptedDataWithPublicKey:(id)arg0 dataFloatNumbers:(*float)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encryptedDataWithPublicKey:(id)arg0 dataNumbers:(*CGFloat)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encryptedDataWithPublicKey:(id)arg0 inPlaceDataFloatNumbers:(*float)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encryptedDataWithPublicKey:(id)arg0 inPlaceDataNumbers:(*CGFloat)arg1 count:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithRecipe:(id)arg0 ;
-(id)initWithRecipeUserInfo:(id)arg0 ;
-(id)initWithRecipeUserInfo:(id)arg0 writeToSubmissionLogs:(BOOL)arg1 ;
-(void)_maybeQuantizeDataTransportOfNoisable:(id)arg0 ;


@end


#endif