// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUSERDEFAULTS_H
#define NSUSERDEFAULTS_H


#import <Foundation/Foundation.h>

#import "NSArray.h"

@interface NSUserDefaults : NSObject {
    id *_kvo_;
    *__CFString _identifier_;
    *__CFString _container_;
    *void _reserved;
}


@property (readonly, copy) NSArray *volatileDomainNames; // ivar: _volatileDomainNames


-(BOOL)_observingCFPreferences;
-(id)_kvo;
-(struct __CFString *)_container;
-(struct __CFString *)_identifier;
-(void)_setContainer:(struct __CFURL *)arg0 ;
-(void)_setIdentifier:(struct __CFString *)arg0 ;
-(void)_setKVO:(id)arg0 ;


@end


#endif