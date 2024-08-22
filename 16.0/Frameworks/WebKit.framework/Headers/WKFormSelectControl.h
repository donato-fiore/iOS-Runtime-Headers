// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKFORMSELECTCONTROL_H
#define WKFORMSELECTCONTROL_H

@class NSString;


#import "WKFormPeripheralBase.h"

@interface WKFormSelectControl : WKFormPeripheralBase {
    RetainPtr<NSObject<WKFormControl>> _control;
}


@property (readonly, nonatomic) NSString *selectFormPopoverTitle;


-(BOOL)selectFormAccessoryHasCheckedItemAtRow:(NSInteger)arg0 ;
-(id)initWithView:(id)arg0 ;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 extendingSelection:(BOOL)arg2 ;


@end


#endif