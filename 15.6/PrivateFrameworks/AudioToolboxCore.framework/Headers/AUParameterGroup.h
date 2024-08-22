// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUPARAMETERGROUP_H
#define AUPARAMETERGROUP_H

@class NSArray, NSMutableDictionary;
@protocol NSSecureCoding;


#import "AUParameterNode.h"

@interface AUParameterGroup : AUParameterNode <NSSecureCoding>



@property (readonly, nonatomic) NSArray *allParameters;
@property (retain, nonatomic) NSMutableDictionary *childIndicesByIdentifier; // ivar: _childIndicesByIdentifier
@property (readonly, nonatomic) NSArray *children; // ivar: _children


+(BOOL)supportsSecureCoding;
-(BOOL)isGroup;
-(id)copyNodeWithOffset:(NSUInteger)arg0 ;
-(id)initWithChildren:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 name:(id)arg1 children:(id)arg2 ;
-(id)initWithTemplate:(id)arg0 identifier:(id)arg1 name:(id)arg2 addressOffset:(NSUInteger)arg3 ;
-(id)valueForKey:(id)arg0 ;
-(void)_deserialize:(struct CADeserializer *)arg0 fromSetFullState:(BOOL)arg1 ;
-(void)_indexChildren;
-(void)_observersChanged:(BOOL)arg0 deltaCount:(int)arg1 ;
-(void)_serialize:(struct CASerializer *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif