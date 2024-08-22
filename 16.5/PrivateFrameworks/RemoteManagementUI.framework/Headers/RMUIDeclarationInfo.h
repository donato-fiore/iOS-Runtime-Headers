// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMUIDECLARATIONINFO_H
#define RMUIDECLARATIONINFO_H

@class RMModelDeclarationBase, NSString;

#import <Foundation/Foundation.h>


@interface RMUIDeclarationInfo : NSObject

@property (retain, nonatomic) RMModelDeclarationBase *declaration; // ivar: _declaration
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isRequired; // ivar: _isRequired
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *profileIdentifier; // ivar: _profileIdentifier


-(id)initWithLabel:(id)arg0 isRequired:(BOOL)arg1 isActive:(BOOL)arg2 declaration:(id)arg3 profileIdentifier:(id)arg4 ;


@end


#endif