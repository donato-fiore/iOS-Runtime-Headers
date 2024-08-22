// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFMYRIADADVERTISEMENTCONTEXTMUTATION_H
#define _AFMYRIADADVERTISEMENTCONTEXTMUTATION_H

@class NSData, NSString;
@protocol AFMyriadAdvertisementContextMutating;

#import <Foundation/Foundation.h>

#import "AFMyriadAdvertisementContext.h"

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating>

 {
    AFMyriadAdvertisementContext *_baseModel;
    NSUInteger _generation;
    NSData *_contextData;
    CGFloat _contextFetchDelay;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setContextData:(id)arg0 ;
-(void)setContextFetchDelay:(CGFloat)arg0 ;
-(void)setGeneration:(NSUInteger)arg0 ;


@end


#endif