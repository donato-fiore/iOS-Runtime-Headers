// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKCONSTRAINT_H
#define SKCONSTRAINT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SKNode.h"

@interface SKConstraint : NSObject <NSSecureCoding, NSCopying>



@property BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) SKNode *referenceNode; // ivar: _referenceNode


+(BOOL)supportsSecureCoding;
+(id)distance:(id)arg0 toNode:(id)arg1 ;
+(id)distance:(id)arg0 toPoint:(struct CGPoint )arg1 ;
+(id)distance:(id)arg0 toPoint:(struct CGPoint )arg1 inNode:(id)arg2 ;
+(id)height:(id)arg0 ;
+(id)orientToNode:(id)arg0 offset:(id)arg1 ;
+(id)orientToPoint:(struct CGPoint )arg0 inNode:(id)arg1 offset:(id)arg2 ;
+(id)orientToPoint:(struct CGPoint )arg0 offset:(id)arg1 ;
+(id)positionX:(id)arg0 ;
+(id)positionX:(id)arg0 Y:(id)arg1 ;
+(id)positionY:(id)arg0 ;
+(id)scale:(id)arg0 ;
+(id)scaleX:(id)arg0 ;
+(id)scaleX:(id)arg0 scaleY:(id)arg1 ;
+(id)scaleY:(id)arg0 ;
+(id)width:(id)arg0 ;
+(id)width:(id)arg0 height:(id)arg1 ;
+(id)zRotation:(id)arg0 ;
-(BOOL)isEqualToConstraint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif