// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKELEMENTACTION_H
#define _WKELEMENTACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _WKElementAction : NSObject {
    RetainPtr<NSString> _title;
    id *_actionHandler;
    WeakObjCPtr<WKActionSheetAssistant> _defaultActionSheetAssistant;
}


@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(NSInteger)elementActionTypeForUIActionIdentifier:(id)arg0 ;
+(id)_elementActionWithType:(NSInteger)arg0 customTitle:(id)arg1 assistant:(id)arg2 ;
+(id)_elementActionWithType:(NSInteger)arg0 info:(id)arg1 assistant:(id)arg2 ;
+(id)_elementActionWithType:(NSInteger)arg0 title:(id)arg1 actionHandler:(id)arg2 ;
+(id)elementActionWithTitle:(id)arg0 actionHandler:(id)arg1 ;
+(id)elementActionWithType:(NSInteger)arg0 ;
+(id)elementActionWithType:(NSInteger)arg0 customTitle:(id)arg1 ;
+(id)elementActionWithType:(NSInteger)arg0 title:(id)arg1 actionHandler:(id)arg2 ;
+(id)imageForElementActionType:(NSInteger)arg0 ;
// -(id)_initWithTitle:(id)arg0 actionHandler:(id)arg1 type:(unk)arg2 assistant:(NSInteger)arg3  ;
-(id)uiActionForElementInfo:(id)arg0 ;
-(void)_runActionWithElementInfo:(id)arg0 forActionSheetAssistant:(id)arg1 ;
-(void)dealloc;
-(void)runActionWithElementInfo:(id)arg0 ;


@end


#endif