// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTELEGACYKEYBOARDIMPL_H
#define _TVRCMEDIAREMOTELEGACYKEYBOARDIMPL_H

@class NSString;
@protocol _TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl;

#import <Foundation/Foundation.h>

#import "_TVRCMediaRemoteKeyboardAdapter.h"
#import "TVRCKeyboardAttributes.h"
#import "_TVRXKeyboardController.h"
#import "_TVRCMRTelevisionWrapper.h"

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl>



@property (retain, nonatomic) _TVRCMediaRemoteKeyboardAdapter *adapter; // ivar: _adapter
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes; // ivar: _currentAttributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (readonly) Class superclass;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television; // ivar: _television


-(BOOL)isEditing;
-(id)attributes;
-(id)text;
-(void)_sessionAttributesDidChange:(id)arg0 ;
-(void)_sessionDidBegin:(id)arg0 ;
-(void)_sessionDidEnd:(id)arg0 ;
-(void)_sessionTextDidChange:(id)arg0 ;
-(void)_textEditingHandlerUpdatedWithEvent:(unsigned int)arg0 session:(id)arg1 ;
-(void)keyboardAdapter:(id)arg0 receivedUnexpectedTextUpdate:(id)arg1 ;
-(void)sendReturnKey;
-(void)setText:(id)arg0 ;


@end


#endif