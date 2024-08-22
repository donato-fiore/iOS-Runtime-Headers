// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIVITYPROGRESSCONTROLLER_H
#define WFACTIVITYPROGRESSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface WFActivityProgressController : NSObject {
    ? title;
    ? viewController;
    ? alertController;
}


@property (nonatomic) NSUInteger state;


-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)presentFrom:(id)arg0 cancellationHandler:(id)arg1 ;


@end


#endif