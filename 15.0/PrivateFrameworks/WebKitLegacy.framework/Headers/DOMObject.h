// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMOBJECT_H
#define DOMOBJECT_H

@class WebScriptObject;
@protocol NSCopying;


#import "DOMStyleSheet.h"

@interface DOMObject : WebScriptObject <NSCopying>

 {
    *DOMObjectInternal _internal;
}


@property (readonly) DOMStyleSheet *sheet;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif