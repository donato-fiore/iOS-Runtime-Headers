// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENTITYKEY_H
#define ENTITYKEY_H


#import <Foundation/Foundation.h>


@interface EntityKey : NSObject

@property int edgeElementId; // ivar: _edgeElementId
@property int elementId; // ivar: _elementId
@property int parentElementId; // ivar: _parentElementId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntityKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithElementId:(int)arg0 edgeElementId:(int)arg1 parentElementId:(int)arg2 ;


@end


#endif