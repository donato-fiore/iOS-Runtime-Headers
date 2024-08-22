// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTSECTION_H
#define SUSCRIPTSECTION_H

@class NSString;


#import "SUScriptObject.h"
#import "SUScriptViewController.h"

@interface SUScriptSection : SUScriptObject {
    NSString *_badgeValue;
    NSString *_identifier;
    BOOL _transient;
    SUScriptViewController *_viewController;
}


@property (retain) NSString *badgeValue;
@property (readonly) NSString *identifier;
@property (readonly) BOOL transient;
@property (readonly) SUScriptViewController *viewController;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithNativeSection:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif