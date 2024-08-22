// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXACTIONACTIVITYMANAGER_H
#define SXACTIONACTIVITYMANAGER_H

@class NSMutableDictionary, NSString;
@protocol SXActionActivityManager;

#import <Foundation/Foundation.h>


@interface SXActionActivityManager : NSObject <SXActionActivityManager>



@property (readonly, nonatomic) NSMutableDictionary *activityProviders; // ivar: _activityProviders
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;
-(id)activityGroupForAction:(id)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(id)activityProviderForAction:(id)arg0 ;
-(id)init;
-(id)previewActivityForAction:(id)arg0 ;
-(id)previewActivityForAction:(id)arg0 sourceView:(id)arg1 sourceRect:(struct CGRect )arg2 ;
-(void)registerActionActivityProvider:(id)arg0 actionType:(id)arg1 ;


@end


#endif