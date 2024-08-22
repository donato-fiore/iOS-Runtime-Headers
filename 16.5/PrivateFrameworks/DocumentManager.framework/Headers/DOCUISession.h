// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCUISESSION_H
#define DOCUISESSION_H


#import <Foundation/Foundation.h>


@interface DOCUISession : NSObject



+(id)anyWindowPreferingKeyWindow;
+(id)defaultContentSizeCategory;
+(id)keyWindow;
+(id)shared;
+(id)windowWithRootViewController:(id)arg0 ;
+(void)performAfterCATransactionCommits:(id)arg0 ;


@end


#endif