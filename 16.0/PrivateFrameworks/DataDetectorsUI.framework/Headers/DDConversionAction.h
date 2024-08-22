// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDCONVERSIONACTION_H
#define DDCONVERSIONACTION_H

@class NSString, CalculateResult;


#import "DDAction.h"
#import "DDUIPhysicalUnit.h"

@interface DDConversionAction : DDAction {
    CGFloat _extractedValue;
    NSString *_extractedCurrency;
    DDUIPhysicalUnit *_extractedUnit;
    CalculateResult *_calculateResult;
    NSString *_calculateString;
    BOOL _calculateDidRun;
    BOOL _ambiguousDetection;
    NSString *_forcedUnit;
    DDUIPhysicalUnit *_targetUnit;
}




+(?)actionAvailableForResult;
+(?)allActionsForResult:(?)arg0 contextonlyTest;
+(?)allActionsForResultcontext;
-(?)commonInitWithURL:(?)arg0 result:(?)arg1 contexttargetUnit;
-(?)initWithURL:(?)arg0 result:(?)arg1 contexttargetUnit;
-(?)initWithURL:(?)arg0 resultcontext;
-(?)initWithValue:(?)arg0 unit:(?)arg1 targetUnit:(?)arg2 context:(?)arg3 ambiguousDetectionresult;
-(BOOL)calloutFlavor;
-(BOOL)canBePerformedWhenDeviceIsLocked;
-(BOOL)conversionFailed;
-(NSUInteger)groupDisplayOption;
-(NSUInteger)menuItemattributes;
-(id)_titleWithValue;
-(id)calculateResult;
-(id)compactTitle;
-(id)iconName;
-(id)localizedName;
-(id)menuIcon;
-(id)menuName;
-(id)quickActionTitle;
-(id)specialCaseActions;
-(id)subtitle;
-(void)performFromView:(id)arg0 ;


@end


#endif