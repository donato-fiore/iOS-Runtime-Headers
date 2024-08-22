// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIFIELDSETTINGDESCRIPTION_H
#define SKUIFIELDSETTINGDESCRIPTION_H

@class NSMutableDictionary, NSString;
@protocol SKUIControllableSettingDescription;


#import "SKUISettingDescription.h"
#import "SKUISettingsGroupController.h"

@interface SKUIFieldSettingDescription : SKUISettingDescription <SKUIControllableSettingDescription>

 {
    NSInteger _fieldType;
    NSMutableDictionary *_fieldValues;
}


@property (weak, nonatomic) SKUISettingsGroupController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fieldType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_viewClassForSettingDescription:(id)arg0 ;
+(NSInteger)_fieldTypeFromElement:(id)arg0 ;
+(id)_inputViewElementFromElement:(id)arg0 ;
-(BOOL)allowsSelection;
-(id)fieldValueForKey:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 parent:(id)arg1 ;
-(void)_dispatchEventOfType:(NSUInteger)arg0 extraInfo:(id)arg1 ;
-(void)handleSelectionOnCompletion:(id)arg0 ;
-(void)setFieldValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif