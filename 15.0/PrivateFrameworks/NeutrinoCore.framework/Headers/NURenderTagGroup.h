// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NURENDERTAGGROUP_H
#define NURENDERTAGGROUP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NURenderTagGroup.h"

@interface NURenderTagGroup : NSObject {
    NSMutableDictionary *_tags;
    NSMutableDictionary *_children;
}


@property (weak) NURenderTagGroup *parent; // ivar: _parent


+(BOOL)validatePath:(id)arg0 error:(*id)arg1 ;
-(id)_descriptionWithLevel:(NSInteger)arg0 ;
-(id)_nodeWithPathComponents:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_root;
-(id)addTag:(id)arg0 forNode:(id)arg1 ;
-(id)childWithName:(id)arg0 ;
-(id)children;
-(id)description;
-(id)finalizeMap:(id)arg0 ;
-(id)init;
-(id)leafName;
-(id)nodeWithPath:(id)arg0 ;
-(id)path;
-(void)_composePathComponents:(id)arg0 ;
-(void)addChild:(id)arg0 withName:(id)arg1 ;
-(void)removeChildWithName:(id)arg0 ;
-(void)visitEveryTagWithBlock:(id)arg0 ;


@end


#endif