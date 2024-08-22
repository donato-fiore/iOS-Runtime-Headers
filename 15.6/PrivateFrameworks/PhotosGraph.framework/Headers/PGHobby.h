// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHOBBY_H
#define PGHOBBY_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface PGHobby : NSObject

@property (retain, nonatomic) NSMutableSet *momentNodes; // ivar: _momentNodes
@property (retain, nonatomic) NSSet *personNodes; // ivar: _personNodes
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif