// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIALARMSOBJC_H
#define WBSWEBEXTENSIONAPIALARMSOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIAlarmsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onAlarm;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onAlarm;


+(BOOL)_isAlarmInfoValid:(id)arg0 ;
+(BOOL)_isAlarmInfoValidWithName:(id)arg0 alarmInfo:(id)arg1 ;
+(id)alarmsWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 ;
-(void)clearAlarmWithName:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)clearAllAlarmsWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)createAlarmWithName:(id)arg0 alarmInfo:(id)arg1 browserContextController:(id)arg2 ;
-(void)getAlarmWithName:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAllAlarmsWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif