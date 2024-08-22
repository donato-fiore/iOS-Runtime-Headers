// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISOPENAPPLICATIONACTION_H
#define ACUISOPENAPPLICATIONACTION_H

@class BSAction, NSSet;



@interface ACUISOpenApplicationAction : BSAction

@property (readonly) NSSet *launchActions;


-(id)init;
-(id)initWithNSUserActivity:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif