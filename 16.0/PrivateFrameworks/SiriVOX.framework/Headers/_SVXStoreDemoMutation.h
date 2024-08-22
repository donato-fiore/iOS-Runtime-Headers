// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSTOREDEMOMUTATION_H
#define _SVXSTOREDEMOMUTATION_H

@class NSString;
@protocol SVXStoreDemoMutating;

#import <Foundation/Foundation.h>

#import "SVXStoreDemo.h"

@interface _SVXStoreDemoMutation : NSObject <SVXStoreDemoMutating>

 {
    SVXStoreDemo *_baseModel;
    NSInteger _transcriptID;
    NSString *_languageCode;
    NSInteger _gender;
    float _outputVolume;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setGender:(NSInteger)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setOutputVolume:(float)arg0 ;
-(void)setTranscriptID:(NSInteger)arg0 ;


@end


#endif