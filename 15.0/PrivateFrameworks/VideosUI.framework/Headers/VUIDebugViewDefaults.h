// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDEBUGVIEWDEFAULTS_H
#define VUIDEBUGVIEWDEFAULTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIDebugViewDefaults : NSObject

@property (nonatomic) BOOL defaultBoolValue; // ivar: _defaultBoolValue
@property (nonatomic) NSUInteger defaultIntegerValue; // ivar: _defaultIntegerValue
@property (readonly, nonatomic) NSString *defaultName; // ivar: _defaultName
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL integerValueType; // ivar: _integerValueType
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 domain:(id)arg2 defaultName:(id)arg3 boolType:(BOOL)arg4 ;
-(void)toggleDefaultBoolValue;


@end


#endif