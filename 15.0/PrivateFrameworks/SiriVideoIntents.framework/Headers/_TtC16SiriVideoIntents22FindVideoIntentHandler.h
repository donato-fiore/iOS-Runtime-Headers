// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRIVIDEOINTENTS22FINDVIDEOINTENTHANDLER_H
#define _TTC16SIRIVIDEOINTENTS22FINDVIDEOINTENTHANDLER_H

@protocol FindVideoIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriVideoIntents22FindVideoIntentHandler : NSObject <FindVideoIntentHandling>

 {
    ? contentResolver;
}




-(id)init;
-(void)confirmFindVideo:(id)arg0 completion:(id)arg1 ;
-(void)handleFindVideo:(id)arg0 completion:(id)arg1 ;
-(void)resolveContentForFindVideo:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif