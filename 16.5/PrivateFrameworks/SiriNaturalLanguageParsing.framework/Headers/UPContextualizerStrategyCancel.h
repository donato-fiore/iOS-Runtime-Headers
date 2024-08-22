// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPCONTEXTUALIZERSTRATEGYCANCEL_H
#define UPCONTEXTUALIZERSTRATEGYCANCEL_H

@class NSString;
@protocol UPContextualizerStrategy;

#import <Foundation/Foundation.h>


@interface UPContextualizerStrategyCancel : NSObject <UPContextualizerStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat prebuiltIntentThreshold; // ivar: _prebuiltIntentThreshold
@property (readonly) Class superclass;


-(id)initWithPrebuiltIntentThreshold:(CGFloat)arg0 ;
-(id)resultUsingContextualizerInput:(id)arg0 ;


@end


#endif