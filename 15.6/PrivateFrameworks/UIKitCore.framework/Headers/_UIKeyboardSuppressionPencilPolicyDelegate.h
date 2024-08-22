// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDSUPPRESSIONPENCILPOLICYDELEGATE_H
#define _UIKEYBOARDSUPPRESSIONPENCILPOLICYDELEGATE_H

@class NSString;
@protocol _UIKeyboardSuppressionPolicyDelegate;

#import <Foundation/Foundation.h>


@interface _UIKeyboardSuppressionPencilPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate>

 {
    BOOL _isQueryingLocaleIdentifier;
}


@property (copy, nonatomic) NSString *_overrideLocaleIdentifier; // ivar: _overrideLocaleIdentifier
@property (nonatomic) BOOL _suppressLocaleIdentifier; // ivar: _suppressLocaleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldSuppressForDelegate:(id)arg0 ;
-(id)_recognitionLocaleIdentifier;


@end


#endif