// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOMBINETEXTINTENTHANDLER_H
#define WFCOMBINETEXTINTENTHANDLER_H

@class NSString;
@protocol WFCombineTextIntentHandling;

#import <Foundation/Foundation.h>


@interface WFCombineTextIntentHandler : NSObject <WFCombineTextIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleCombineText:(id)arg0 completion:(id)arg1 ;
-(void)resolveCustomSeparatorForCombineText:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSeparatorForCombineText:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTextForCombineText:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif