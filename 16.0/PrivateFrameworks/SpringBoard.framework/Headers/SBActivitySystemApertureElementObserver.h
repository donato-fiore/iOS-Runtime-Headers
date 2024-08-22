// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACTIVITYSYSTEMAPERTUREELEMENTOBSERVER_H
#define SBACTIVITYSYSTEMAPERTUREELEMENTOBSERVER_H

@class NSMutableDictionary, NSString;
@protocol SBActivityObserver;

#import <Foundation/Foundation.h>


@interface SBActivitySystemApertureElementObserver : NSObject <SBActivityObserver>

 {
    NSMutableDictionary *_elementAssertionByActivityIdentifier;
    NSMutableDictionary *_elementByActivityIdentifier;
    NSMutableDictionary *_prominenceAssertionByActivityIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_createAndActivateSystemApertureElementWithScene:(id)arg0 activityIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_invalidateSystemApertureElementForActivityIdentifier:(id)arg0 ;
-(void)_updateSystemApertureElementProminence:(BOOL)arg0 forActivityIdentifier:(id)arg1 ;
-(void)activityDidEnd:(id)arg0 ;
-(void)activityDidStart:(id)arg0 ;
-(void)dismissAlertForActivityAlertProvider:(id)arg0 ;
-(void)presentAlertForActivityAlertProvider:(id)arg0 ;


@end


#endif