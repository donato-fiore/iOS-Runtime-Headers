// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICOMPOSITIONMAPITEM_H
#define TICOMPOSITIONMAPITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TICompositionMapItem : NSObject

@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)itemWithKey:(id)arg0 value:(id)arg1 ;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;


@end


#endif