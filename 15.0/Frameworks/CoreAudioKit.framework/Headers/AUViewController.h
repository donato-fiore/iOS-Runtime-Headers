// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUVIEWCONTROLLER_H
#define AUVIEWCONTROLLER_H

@class UIViewController, NSExtensionContext, NSString;
@protocol NSExtensionRequestHandling;



@interface AUViewController : UIViewController <NSExtensionRequestHandling>



@property (retain) NSExtensionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;


@end


#endif