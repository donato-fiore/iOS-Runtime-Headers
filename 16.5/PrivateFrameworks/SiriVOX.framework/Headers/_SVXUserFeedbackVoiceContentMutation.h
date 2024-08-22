// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXUSERFEEDBACKVOICECONTENTMUTATION_H
#define _SVXUSERFEEDBACKVOICECONTENTMUTATION_H

@class NSString;
@protocol SVXUserFeedbackVoiceContentMutating;

#import <Foundation/Foundation.h>

#import "SVXUserFeedbackVoiceContent.h"

@interface _SVXUserFeedbackVoiceContentMutation : NSObject <SVXUserFeedbackVoiceContentMutating>

 {
    SVXUserFeedbackVoiceContent *_baseModel;
    NSString *_text;
    BOOL _isPhonetic;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setIsPhonetic:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif