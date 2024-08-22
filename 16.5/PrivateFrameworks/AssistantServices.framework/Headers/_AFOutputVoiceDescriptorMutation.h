// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFOUTPUTVOICEDESCRIPTORMUTATION_H
#define _AFOUTPUTVOICEDESCRIPTORMUTATION_H

@class NSString;
@protocol AFOutputVoiceDescriptorMutating;

#import <Foundation/Foundation.h>

#import "AFOutputVoiceDescriptor.h"

@interface _AFOutputVoiceDescriptorMutation : NSObject <AFOutputVoiceDescriptorMutating>

 {
    AFOutputVoiceDescriptor *_base;
    NSString *_localizedDisplay;
    NSString *_localizedDisplayWithRegion;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getLocalizedDisplay;
-(id)getLocalizedDisplayWithRegion;
-(id)initWithBase:(id)arg0 ;
-(void)setLocalizedDisplay:(id)arg0 ;
-(void)setLocalizedDisplayWithRegion:(id)arg0 ;


@end


#endif