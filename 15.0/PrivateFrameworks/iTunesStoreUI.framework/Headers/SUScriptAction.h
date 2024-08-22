// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTACTION_H
#define SUSCRIPTACTION_H

@class NSString;
@protocol NSCopying;


#import "SUScriptObject.h"

@interface SUScriptAction : SUScriptObject <NSCopying>

 {
    NSString *_actionType;
}


@property (copy) NSString *actionType;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActionType:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)performAction;


@end


#endif