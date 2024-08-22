// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBKEYPLANECHANGECONTEXT_H
#define UIKBKEYPLANECHANGECONTEXT_H


#import <Foundation/Foundation.h>


@interface UIKBKeyplaneChangeContext : NSObject

@property (nonatomic) BOOL isSecureTextEntry; // ivar: _isSecureTextEntry
@property (nonatomic) BOOL selfSizingChanged; // ivar: _selfSizingChanged
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) BOOL sizeDidChange; // ivar: _sizeDidChange
@property (nonatomic) BOOL splitWidthsChanged; // ivar: _splitWidthsChanged
@property (nonatomic) BOOL updateAssistantView; // ivar: _updateAssistantView


+(id)keyplaneChangeContext;
+(id)keyplaneChangeContextWithSize:(struct CGSize )arg0 ;


@end


#endif