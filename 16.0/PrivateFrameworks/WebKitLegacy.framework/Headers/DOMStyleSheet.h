// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMSTYLESHEET_H
#define DOMSTYLESHEET_H

@class NSString;


#import "DOMObject.h"
#import "DOMMediaList.h"
#import "DOMNode.h"
#import "DOMStyleSheet.h"

@interface DOMStyleSheet : DOMObject

@property BOOL disabled;
@property (readonly, copy) NSString *href;
@property (readonly) DOMMediaList *media;
@property (readonly) DOMNode *ownerNode;
@property (readonly) DOMStyleSheet *parentStyleSheet;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *type;


-(void)dealloc;


@end


#endif