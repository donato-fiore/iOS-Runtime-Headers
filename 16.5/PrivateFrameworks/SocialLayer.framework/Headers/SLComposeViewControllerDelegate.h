// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOMPOSEVIEWCONTROLLERDELEGATE_H
#define SLCOMPOSEVIEWCONTROLLERDELEGATE_H

@class NSString;
@protocol MFMessageComposeViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface SLComposeViewControllerDelegate : NSObject <MFMessageComposeViewControllerDelegate>



@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCallback:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;


@end


#endif