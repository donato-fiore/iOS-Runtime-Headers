// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSOFTWARECAPABILITIESDIALOGOPERATION_H
#define ISSOFTWARECAPABILITIESDIALOGOPERATION_H

@class NSDictionary;


#import "ISOperation.h"

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
    NSDictionary *_mismatches;
    id *_requiredCapabilities;
}


@property (readonly) NSDictionary *mismatches;
@property (readonly) id *requiredCapabilities;


-(id)initWithRequiredCapabilities:(id)arg0 mismatches:(id)arg1 ;
-(void)_postDefaultDialog;
-(void)dealloc;
-(void)run;


@end


#endif