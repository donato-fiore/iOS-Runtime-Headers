// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTEWEBSHEETVIEWCONTROLLERERRORCONTEXT_H
#define WFREMOTEWEBSHEETVIEWCONTROLLERERRORCONTEXT_H

@class NSString, NSError;
@protocol WFRemoteWebSheetViewControllerEventContext;

#import <Foundation/Foundation.h>


@interface WFRemoteWebSheetViewControllerErrorContext : NSObject <WFRemoteWebSheetViewControllerEventContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif