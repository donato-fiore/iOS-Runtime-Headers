// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSUBSCRIBEACTIONSERIALIZER_H
#define SXSUBSCRIBEACTIONSERIALIZER_H

@class NSString;
@protocol SXActionSerializer;

#import <Foundation/Foundation.h>


@interface SXSubscribeActionSerializer : NSObject <SXActionSerializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)URLForAction:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif