// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTABDIALOGCANCELLATIONEXEMPTION_H
#define WBSTABDIALOGCANCELLATIONEXEMPTION_H


#import <Foundation/Foundation.h>


@interface WBSTabDialogCancellationExemption : NSObject {
    id *_cancellationExemptionHandler;
}




+(id)committedNavigationExemption;
+(id)provisionalNavigationExemption;
+(id)sameOriginNavigationExemption:(id)arg0 ;
-(BOOL)isExemptFromCancellationInContext:(id)arg0 ;
-(id)init;
-(id)initWithCancellationHandler:(id)arg0 ;


@end


#endif