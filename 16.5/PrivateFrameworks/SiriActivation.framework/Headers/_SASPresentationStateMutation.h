// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SASPRESENTATIONSTATEMUTATION_H
#define _SASPRESENTATIONSTATEMUTATION_H

@class NSString;
@protocol SASPresentationStateMutating;

#import <Foundation/Foundation.h>

#import "SASPresentationState.h"

@interface _SASPresentationStateMutation : NSObject <SASPresentationStateMutating>

 {
    SASPresentationState *_baseModel;
    NSString *_presentationIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setPresentationIdentifier:(id)arg0 ;


@end


#endif