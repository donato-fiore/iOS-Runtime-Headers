// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTMENUITEM_H
#define SUSCRIPTMENUITEM_H

@class NSString;


#import "SUScriptObject.h"

@interface SUScriptMenuItem : SUScriptObject {
    BOOL _enabled;
    NSString *_title;
    id *_userInfo;
}


@property BOOL enabled;
@property (retain) NSString *title;
@property (retain) id *userInfo;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(void)_sendDidChange;
-(void)dealloc;


@end


#endif