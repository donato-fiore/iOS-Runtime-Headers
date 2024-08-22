// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXDEACTIVATIONOPTIONSMUTATION_H
#define _SVXDEACTIVATIONOPTIONSMUTATION_H

@class NSString;
@protocol SVXDeactivationOptionsMutating;

#import <Foundation/Foundation.h>

#import "SVXDeactivationOptions.h"

@interface _SVXDeactivationOptionsMutation : NSObject <SVXDeactivationOptionsMutating>

 {
    SVXDeactivationOptions *_baseModel;
    CGFloat _audioSessionDeactivationDelay;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAudioSessionDeactivationDelay:(CGFloat)arg0 ;


@end


#endif