// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCKEYBOARDCONTROLLER_H
#define TVRCKEYBOARDCONTROLLER_H

@class NSString;
@protocol TVRCKeyboardControllerDelegate;

#import <Foundation/Foundation.h>

#import "TVRCDevice.h"
#import "TVRCKeyboardAttributes.h"

@interface TVRCKeyboardController : NSObject {
    TVRCDevice *_device;
    BOOL _editing;
    TVRCKeyboardAttributes *_attributes;
    NSString *_text;
}


@property (readonly, nonatomic) TVRCKeyboardAttributes *attributes;
@property (weak, nonatomic) NSObject<TVRCKeyboardControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (copy, nonatomic) NSString *text;


-(id)_initWithDevice:(id)arg0 ;
-(void)_setCurrentState:(id)arg0 ;
-(void)sendReturnKey;


@end


#endif