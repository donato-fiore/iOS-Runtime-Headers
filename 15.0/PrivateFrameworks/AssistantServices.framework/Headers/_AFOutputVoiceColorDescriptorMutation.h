// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFOUTPUTVOICECOLORDESCRIPTORMUTATION_H
#define _AFOUTPUTVOICECOLORDESCRIPTORMUTATION_H

@class NSString;
@protocol AFOutputVoiceColorDescriptorMutating;

#import <Foundation/Foundation.h>

#import "AFOutputVoiceColorDescriptor.h"

@interface _AFOutputVoiceColorDescriptorMutation : NSObject <AFOutputVoiceColorDescriptorMutating>

 {
    AFOutputVoiceColorDescriptor *_baseModel;
    NSString *_hexColor;
    NSString *_colorName;
    float _alpha;
    NSString *_localizedOutputVoiceColor;
    NSString *_localizedOutputVoice;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAlpha:(float)arg0 ;
-(void)setColorName:(id)arg0 ;
-(void)setHexColor:(id)arg0 ;
-(void)setLocalizedOutputVoice:(id)arg0 ;
-(void)setLocalizedOutputVoiceColor:(id)arg0 ;


@end


#endif