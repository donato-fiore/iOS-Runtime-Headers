// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVLRUDICTIONARYNODE_H
#define MSVLRUDICTIONARYNODE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MSVLRUDictionaryNode.h"

@interface MSVLRUDictionaryNode : NSObject <NSCopying>



@property (readonly, nonatomic) id *key; // ivar: _key
@property (weak, nonatomic) MSVLRUDictionaryNode *next; // ivar: _next
@property (retain, nonatomic) id *object; // ivar: _object
@property (weak, nonatomic) MSVLRUDictionaryNode *prev; // ivar: _prev


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKey:(id)arg0 object:(id)arg1 ;


@end


#endif