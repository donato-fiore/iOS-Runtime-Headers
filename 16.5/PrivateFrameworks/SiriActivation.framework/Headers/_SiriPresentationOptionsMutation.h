// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SIRIPRESENTATIONOPTIONSMUTATION_H
#define _SIRIPRESENTATIONOPTIONSMUTATION_H

@class NSString;
@protocol SiriPresentationOptionsMutating;

#import <Foundation/Foundation.h>

#import "SiriPresentationOptions.h"

@interface _SiriPresentationOptionsMutation : NSObject <SiriPresentationOptionsMutating>

 {
    SiriPresentationOptions *_baseModel;
    BOOL _wakeScreen;
    BOOL _hideOtherWindowsDuringAppearance;
    NSInteger _rotationStyle;
    NSInteger _requestSource;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setHideOtherWindowsDuringAppearance:(BOOL)arg0 ;
-(void)setRequestSource:(NSInteger)arg0 ;
-(void)setRotationStyle:(NSInteger)arg0 ;
-(void)setWakeScreen:(BOOL)arg0 ;


@end


#endif