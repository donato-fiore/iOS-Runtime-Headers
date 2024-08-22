// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSPLITTEXTINTENTHANDLER_H
#define WFSPLITTEXTINTENTHANDLER_H

@class NSString;
@protocol WFSplitTextIntentHandling;

#import <Foundation/Foundation.h>


@interface WFSplitTextIntentHandler : NSObject <WFSplitTextIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleSplitText:(id)arg0 completion:(id)arg1 ;
-(void)resolveCustomSeparatorForSplitText:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSeparatorForSplitText:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTextForSplitText:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif