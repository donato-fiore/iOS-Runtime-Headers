// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGRECIPEDECODER_H
#define PHAPRIVATEFEDERATEDLEARNINGRECIPEDECODER_H


#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningRecipeDecoder : NSObject



+(id)castObject:(id)arg0 withName:(id)arg1 toClass:(Class)arg2 error:(*id)arg3 ;
+(id)decodeRecipeUserInfo:(id)arg0 attachmentURLs:(id)arg1 photoLibrary:(id)arg2 graphManager:(id)arg3 decodingError:(*id)arg4 ;
+(id)decodingErrorWithMessage:(id)arg0 ;
+(id)objectOfClass:(Class)arg0 forKey:(id)arg1 inDictionary:(id)arg2 error:(*id)arg3 ;
+(id)optionalObjectOfClass:(Class)arg0 forKey:(id)arg1 inDictionary:(id)arg2 error:(*id)arg3 ;


@end


#endif