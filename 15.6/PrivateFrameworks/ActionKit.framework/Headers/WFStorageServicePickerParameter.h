// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSTORAGESERVICEPICKERPARAMETER_H
#define WFSTORAGESERVICEPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;


#import "WFiCloudDriveAccessResource.h"

@interface WFStorageServicePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource; // ivar: _iCloudDriveAccessResource


+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)setActionResources:(id)arg0 ;


@end


#endif