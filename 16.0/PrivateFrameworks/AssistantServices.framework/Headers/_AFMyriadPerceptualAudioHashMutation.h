// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFMYRIADPERCEPTUALAUDIOHASHMUTATION_H
#define _AFMYRIADPERCEPTUALAUDIOHASHMUTATION_H

@class NSData, NSString;
@protocol AFMyriadPerceptualAudioHashMutating;

#import <Foundation/Foundation.h>

#import "AFMyriadPerceptualAudioHash.h"

@interface _AFMyriadPerceptualAudioHashMutation : NSObject <AFMyriadPerceptualAudioHashMutating>

 {
    AFMyriadPerceptualAudioHash *_base;
    NSData *_data;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getData;
-(id)initWithBase:(id)arg0 ;
-(void)setData:(id)arg0 ;


@end


#endif