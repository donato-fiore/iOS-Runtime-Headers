// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SASTESTINGINPUTMUTATION_H
#define _SASTESTINGINPUTMUTATION_H

@class NSString, NSURL;
@protocol SASTestingInputMutating;

#import <Foundation/Foundation.h>

#import "SASTestingInput.h"

@interface _SASTestingInputMutation : NSObject <SASTestingInputMutating>

 {
    SASTestingInput *_baseModel;
    NSInteger _type;
    NSString *_text;
    NSURL *_recordedSpeechURL;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setRecordedSpeechURL:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;


@end


#endif