// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSPEECHTESTREQUESTOPTIONSMUTATION_H
#define _AFSPEECHTESTREQUESTOPTIONSMUTATION_H

@class NSArray, NSString;
@protocol AFSpeechTestRequestOptionsMutating;

#import <Foundation/Foundation.h>

#import "AFSpeechTestRequestOptions.h"

@interface _AFSpeechTestRequestOptionsMutation : NSObject <AFSpeechTestRequestOptionsMutating>

 {
    AFSpeechTestRequestOptions *_base;
    NSArray *_jitContext;
    NSString *_overrideModelPath;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getJitContext;
-(id)getOverrideModelPath;
-(id)initWithBase:(id)arg0 ;
-(void)setJitContext:(id)arg0 ;
-(void)setOverrideModelPath:(id)arg0 ;


@end


#endif