// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSCONTACTSPOLICYCONTROLLER_H
#define PSCONTACTSPOLICYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PSContactsPolicyController : NSObject

@property (retain, nonatomic) NSObject *controller; // ivar: _controller


-(id)authorizationLevelForSpecifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)specifier;
-(void)setAuthorizationLevel:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif