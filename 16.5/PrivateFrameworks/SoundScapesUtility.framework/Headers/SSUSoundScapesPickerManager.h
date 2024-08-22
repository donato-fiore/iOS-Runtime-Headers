// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUSOUNDSCAPESPICKERMANAGER_H
#define SSUSOUNDSCAPESPICKERMANAGER_H

@class NSMapTable, NSString;
@protocol _EXHostViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface SSUSoundScapesPickerManager : NSObject <_EXHostViewControllerDelegate>

 {
    NSMapTable *_targetMediaProfile;
    NSMapTable *_delegates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)pickerSupportHome:(id)arg0 targetMediaProfileContainers:(id)arg1 ;
+(id)pickerForMediaProfileContainers:(id)arg0 forDelegate:(id)arg1 ;
+(id)pickerIdentity;
+(id)sharedManager;
-(id)init;
-(void)hostViewControllerDidActivate:(id)arg0 ;
-(void)hostViewControllerWillDeactivate:(id)arg0 error:(id)arg1 ;
-(void)registerViewController:(id)arg0 forMediaProfiles:(id)arg1 andDelegate:(id)arg2 ;


@end


#endif