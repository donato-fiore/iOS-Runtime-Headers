// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSEARCHMAPSACTION_H
#define WFSEARCHMAPSACTION_H

@class WFAction;



@interface WFSearchMapsAction : WFAction



-(id)appIdentifier;
-(void)openMapItems:(id)arg0 ;
-(void)openMapsLink:(id)arg0 inAppNamed:(id)arg1 ;
-(void)openMapsURL:(id)arg0 withAppIdentifier:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif