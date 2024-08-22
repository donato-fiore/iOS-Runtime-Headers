// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKAPPKEYBOARD_H
#define IKAPPKEYBOARD_H

@class JSManagedValue, NSString, NSArray, JSValue;
@protocol IKAppKeyboardBridge, IKDOMFeature, IKAppKeyboardDelegate;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"
#import "IKJSKeyboard.h"

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature>

 {
    JSManagedValue *_jsHints;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IKAppKeyboardDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *hints; // ivar: _hints
@property (copy, nonatomic, setter=setJSHints:) JSValue *jsHints;
@property (weak, nonatomic, setter=setJSKeyboard:) IKJSKeyboard *jsKeyboard; // ivar: _jsKeyboard
@property (copy, nonatomic, setter=setJSSource:) NSString *jsSource; // ivar: _jsSource
@property (copy, nonatomic, setter=setJSText:) NSString *jsText; // ivar: _jsText
@property (copy, nonatomic, getter=_source, setter=_setSource:) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(void)didSelectHintWithText:(id)arg0 searchTerm:(id)arg1 ;


@end


#endif