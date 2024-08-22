// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDFOLLOWUPCONTROLLER_H
#define CDPDFOLLOWUPCONTROLLER_H

@class FLFollowUpController, NSString;
@protocol CDPDAuthListener;

#import <Foundation/Foundation.h>

#import "CDPDFollowUpFactory.h"

@interface CDPDFollowUpController : NSObject <CDPDAuthListener>

 {
    FLFollowUpController *_followUpController;
    CDPDFollowUpFactory *_followUpFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)clearFollowUpWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)postFollowUpItemForContext:(id)arg0 error:(*id)arg1 ;
-(id)_followUpControllerForContext:(id)arg0 ;
-(id)informativeText;
-(id)init;
-(void)dealloc;
-(void)securityLevelChanged:(BOOL)arg0 forAltDSID:(id)arg1 ;


@end


#endif