// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSETITEM_H
#define AMSSETITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSSetItem : NSObject

@property (readonly, nonatomic) NSString *hashKey; // ivar: _hashKey
@property (readonly, nonatomic) id *object; // ivar: _object


+(id)setItemWithObject:(id)arg0 hashKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithObject:(id)arg0 hashKey:(id)arg1 ;


@end


#endif