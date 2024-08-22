// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBEXTENSIONBUTTONCONFIGURATION_H
#define SFWEBEXTENSIONBUTTONCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFWebExtensionButtonConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger activeExtensionCount; // ivar: _activeExtensionCount
@property (readonly, nonatomic) BOOL alwaysShowMultipleExtensionsButton; // ivar: _alwaysShowMultipleExtensionsButton
@property (readonly, nonatomic) NSArray *buttons; // ivar: _buttons


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithActiveExtensionCount:(NSUInteger)arg0 alwaysShowMultipleExtensionsButton:(BOOL)arg1 buttons:(id)arg2 ;


@end


#endif