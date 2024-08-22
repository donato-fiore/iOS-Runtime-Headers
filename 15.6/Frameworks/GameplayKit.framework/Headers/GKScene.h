// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSCENE_H
#define GKSCENE_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding, GKSceneRootNodeType;

#import <Foundation/Foundation.h>


@interface GKScene : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *entities; // ivar: _entities
@property (readonly, nonatomic) NSDictionary *graphs; // ivar: _graphs
@property (retain, nonatomic) NSObject<GKSceneRootNodeType> *rootNode; // ivar: _rootNode


+(BOOL)supportsSecureCoding;
+(id)_sceneWithFileNamed:(id)arg0 rootNode:(id)arg1 ;
+(id)sceneWithFileNamed:(id)arg0 ;
+(id)sceneWithFileNamed:(id)arg0 rootNode:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addEntity:(id)arg0 ;
-(void)addGraph:(id)arg0 name:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeEntity:(id)arg0 ;
-(void)removeGraph:(id)arg0 ;


@end


#endif