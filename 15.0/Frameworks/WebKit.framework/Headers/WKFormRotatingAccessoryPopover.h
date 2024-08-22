// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKFORMROTATINGACCESSORYPOPOVER_H
#define WKFORMROTATINGACCESSORYPOPOVER_H

@protocol WKRotatingPopoverDelegate;


#import "WKRotatingPopover.h"

@interface WKFormRotatingAccessoryPopover : WKRotatingPopover <WKRotatingPopoverDelegate>





-(NSUInteger)popoverArrowDirections;
-(id)initWithView:(id)arg0 ;
-(void)accessoryDone;
-(void)popoverWasDismissed:(id)arg0 ;


@end


#endif