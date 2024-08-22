// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKNODE_H
#define SKNODE_H

@class UIResponder, NSMutableArray, NSMutableDictionary, NSArray, NSDictionary, NSString, GKEntity, UIFocusEffect, UIView;
@protocol NSCopying, NSSecureCoding, UIFocusItem, UIFocusItemContainer, UIFocusEnvironment;


#import "SKNode.h"
#import "SKPhysicsBody.h"
#import "SKReachConstraints.h"
#import "SKScene.h"

@interface SKNode : UIResponder <NSCopying, NSSecureCoding, UIFocusItem>

 {
    *void _skcNode;
    SKNode *_parent;
    NSMutableArray *_children;
    NSMutableArray *_actions;
    NSMutableDictionary *_keyedActions;
    NSMutableDictionary *_keyedSubSprites;
    NSMutableDictionary *_info;
    NSMutableDictionary *_attributeValues;
    NSArray *_constraints;
    unsigned int _version;
    BOOL _userInteractionEnabled;
}


@property (readonly, nonatomic) shared_ptr<PKCAether> _aether;
@property (readonly, nonatomic) NSArray *_allActions;
@property (nonatomic) CGPoint _anchorPoint;
@property (readonly, nonatomic) *void _backingNode;
@property (retain, nonatomic) NSMutableDictionary *_info;
@property (nonatomic) BOOL _showBounds;
@property (readonly, nonatomic) CGSize _size;
@property (readonly, nonatomic) CGRect _untransformedBounds;
@property (readonly, nonatomic) CGSize _untransformedSize;
@property (nonatomic) CGFloat alpha;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) NSArray *children;
@property (copy, nonatomic) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) GKEntity *entity;
@property (weak, nonatomic) GKEntity *entity; // ivar: _entity
@property (nonatomic) NSInteger focusBehavior; // ivar: _focusBehavior
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) ? globalAccumulatedBoundingVerts;
@property (readonly, nonatomic) ? globalBoundingVerts;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) *CGPath outline;
@property (readonly, nonatomic) SKNode *parent;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, getter=isPaused) BOOL paused;
@property BOOL performFullCapture; // ivar: _performFullCapture
@property (retain, nonatomic) SKPhysicsBody *physicsBody;
@property (nonatomic) CGPoint position;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (copy, nonatomic) SKReachConstraints *reachConstraints; // ivar: _reachConstraints
@property (readonly, nonatomic) SKScene *scene;
@property (nonatomic) CGFloat speed;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *userData; // ivar: _userData
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) CGFloat xRotation;
@property (nonatomic) CGFloat xScale;
@property (nonatomic) CGFloat yRotation;
@property (nonatomic) CGFloat yScale;
@property (nonatomic) CGFloat zPosition;
@property (nonatomic) CGFloat zRotation;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyChildGroupingID;
+(id)debugHierarchyObjectsInGroupWithID:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 ;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)node;
+(id)nodeFromCaptureData:(id)arg0 ;
+(id)nodeWithFileNamed:(id)arg0 ;
+(id)nodeWithFileNamed:(id)arg0 securelyWithClasses:(id)arg1 andError:(*id)arg2 ;
-(*void)_makeBackingNode;
-(BOOL)_isEffectivelyHidden;
-(BOOL)_isEligibleForFocus;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_pathFromPhysicsBodyToPoints:(***NSUInteger)arg0 outSize;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 ;
-(BOOL)hasActions;
-(BOOL)hasChildren;
-(BOOL)hasUniformAlphaAndIsVisible;
-(BOOL)inParentHierarchy:(id)arg0 ;
-(BOOL)intersectsNode:(id)arg0 ;
-(BOOL)intersectsNode:(id)arg0 useAlphaTest:(BOOL)arg1 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(BOOL)needsUpdate;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(Class)swiftClassFromString:(id)arg0 moduleName:(id)arg1 ;
-(id)_copyImageData;
-(id)_descendants;
-(id)_descendantsWithPredicate:(id)arg0 ;
-(id)_subnodeFromIndexPath:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)allIntersectionsWithNode:(id)arg0 useAlphaTest:(BOOL)arg1 ;
-(id)archiveToFile:(id)arg0 ;
-(id)childNodeWithName:(id)arg0 ;
-(id)childrenInRect:(struct CGRect )arg0 ;
-(id)containingView;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createDebugHierarchyVisualRepresentation;
-(id)createFullCaptureData;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)nodeAtPoint:(struct CGPoint )arg0 ;
-(id)nodeAtPoint:(struct CGPoint )arg0 recursive:(BOOL)arg1 ;
-(id)nodesAtPoint:(struct CGPoint )arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)physicsField;
-(id)valueForAttributeNamed:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromNode:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toNode:(id)arg1 ;
-(struct CGPoint )convertPointFromParent:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToParent:(struct CGPoint )arg0 ;
-(struct CGRect )_convertFrameToView:(id)arg0 ;
-(struct CGRect )calculateAccumulatedFrame;
-(struct CGSize )size;
-(void)_debugPrint:(int)arg0 ;
-(void)_debugPrint:(int)arg0 mask:(NSUInteger)arg1 ;
-(void)_descendantsToMutableArray:(id)arg0 ;
// -(void)_descendantsWithPredicate:(id)arg0 toMutableArray:(unk)arg1  ;
-(void)_didMakeBackingNode;
// -(void)_enumerateChildNodesWithName:(id)arg0 usingBlock:(id)arg1 stopPointer:(unk)arg2  ;
-(void)_flippedChangedFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_getBasePhysicsScale:(*float)arg0 yScale:(*float)arg1 ;
-(void)_getWorldTransform:(*float)arg0 positionY:(*float)arg1 rotation:(*float)arg2 xScale:(*float)arg3 yScale:(*float)arg4 ;
-(void)_initAccessibility;
-(void)_performCleanup;
// -(void)_processSearchTokens:(struct vector<Token, std::allocator<Token>> )arg0 visited:(*void)arg1 usingBlock:(id)arg2 stopPointer:(unk)arg3  ;
-(void)_removeAction:(id)arg0 ;
-(void)_removeChild:(id)arg0 ;
-(void)_runAction:(id)arg0 ;
-(void)_scaleFactorChangedFrom:(float)arg0 to:(float)arg1 ;
-(void)_update:(CGFloat)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)addChild:(id)arg0 withKey:(id)arg1 ;
-(void)dealloc;
-(void)debugPrint;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateChildNodesWithName:(id)arg0 usingBlock:(id)arg1 ;
-(void)insertChild:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)moveToParent:(id)arg0 ;
-(void)removeActionForKey:(id)arg0 ;
-(void)removeAllActions;
-(void)removeAllChildren;
-(void)removeChild:(id)arg0 ;
-(void)removeChildAtIndex:(NSInteger)arg0 ;
-(void)removeChildrenInArray:(id)arg0 ;
-(void)removeFromParent;
-(void)runAction:(id)arg0 ;
-(void)runAction:(id)arg0 completion:(id)arg1 ;
-(void)runAction:(id)arg0 withKey:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)setScale:(CGFloat)arg0 ;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setValue:(id)arg0 forAttributeNamed:(id)arg1 ;
-(void)updateFocusIfNeeded;
-(void)updatePhysicsPositionAndScaleFromSprite;


@end


#endif