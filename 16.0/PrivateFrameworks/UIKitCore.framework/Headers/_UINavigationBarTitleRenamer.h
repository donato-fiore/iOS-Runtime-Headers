// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARTITLERENAMER_H
#define _UINAVIGATIONBARTITLERENAMER_H

@protocol _UINavigationBarTitleRenamerDelegate;

#import <Foundation/Foundation.h>

#import "_UINavigationBarTitleRenamerSession.h"

@interface _UINavigationBarTitleRenamer : NSObject

@property (retain, nonatomic) _UINavigationBarTitleRenamerSession *currentSession; // ivar: _currentSession
@property (weak, nonatomic) NSObject<_UINavigationBarTitleRenamerDelegate> *delegate; // ivar: _delegate


-(void)_sessionTextFieldDidEndEditing:(id)arg0 ;
-(void)_sessionTextFieldWillEndEditing:(id)arg0 ;
-(void)endSession:(id)arg0 ;
-(void)startSession:(id)arg0 ;


@end


#endif