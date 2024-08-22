// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGAUGMENTERSDECODER_H
#define PHAPRIVATEFEDERATEDLEARNINGAUGMENTERSDECODER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningAugmentersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *augmenterNameToClass; // ivar: _augmenterNameToClass


-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 ;
-(id)augmentersFromArray:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)instanceForAugmenterConfig:(id)arg0 error:(*id)arg1 ;


@end


#endif