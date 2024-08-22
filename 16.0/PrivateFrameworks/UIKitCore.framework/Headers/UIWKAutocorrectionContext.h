// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWKAUTOCORRECTIONCONTEXT_H
#define UIWKAUTOCORRECTIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIWKAutocorrectionContext : NSObject

@property (copy, nonatomic) NSString *contextAfterSelection; // ivar: _contextAfterSelection
@property (copy, nonatomic) NSString *contextBeforeSelection; // ivar: _contextBeforeSelection
@property (copy, nonatomic) NSString *markedText; // ivar: _markedText
@property (nonatomic) _NSRange rangeInMarkedText; // ivar: _rangeInMarkedText
@property (copy, nonatomic) NSString *selectedText; // ivar: _selectedText


-(void)dealloc;


@end


#endif