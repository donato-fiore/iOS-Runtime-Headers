// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMICRODATAPARSERSTACKITEM_H
#define SGMICRODATAPARSERSTACKITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SGMicrodataDocument.h"
#import "SGMicrodataParserStackItem.h"

@interface SGMicrodataParserStackItem : NSObject

@property (readonly) SGMicrodataDocument *document; // ivar: _document
@property (readonly) NSArray *itemScopes; // ivar: _itemScopes
@property (readonly) SGMicrodataParserStackItem *parent; // ivar: _parent
@property (readonly) NSArray *textConsumers; // ivar: _textConsumers


-(id)initWithDocument:(id)arg0 ;
-(id)initWithParent:(id)arg0 item:(id)arg1 htmlId:(id)arg2 textConsumer:(id)arg3 ;


@end


#endif