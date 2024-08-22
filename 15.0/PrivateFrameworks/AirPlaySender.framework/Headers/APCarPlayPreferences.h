// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APCARPLAYPREFERENCES_H
#define APCARPLAYPREFERENCES_H

@class CRCarPlayPreferences, NSString;
@protocol CRCarPlayPreferencesDelegate, APCarPlayPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface APCarPlayPreferences : NSObject <CRCarPlayPreferencesDelegate>

 {
    CRCarPlayPreferences *_preferences;
}


@property (readonly, nonatomic, getter=isCarPlayEnabled) BOOL carPlayEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<APCarPlayPreferencesDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)handleCarPlayAllowedDidChange;


@end


#endif