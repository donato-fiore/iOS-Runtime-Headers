// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPCONTEXTUALIZERSTRATEGYOFFER_H
#define UPCONTEXTUALIZERSTRATEGYOFFER_H

@class NSString;
@protocol UPContextualizerStrategy;

#import <Foundation/Foundation.h>


@interface UPContextualizerStrategyOffer : NSObject <UPContextualizerStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat prebuiltIntentThreshold; // ivar: _prebuiltIntentThreshold
@property (readonly) Class superclass;


-(id)initWithPrebuiltIntentThreshold:(CGFloat)arg0 ;
-(id)resultUsingContextualizerInput:(id)arg0 ;


@end


#endif