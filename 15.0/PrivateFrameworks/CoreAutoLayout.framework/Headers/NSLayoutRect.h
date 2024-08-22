// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLAYOUTRECT_H
#define NSLAYOUTRECT_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "NSLayoutXAxisAnchor.h"
#import "NSLayoutYAxisAnchor.h"
#import "NSLayoutDimension.h"
#import "NSLayoutPoint.h"

@interface NSLayoutRect : NSObject <NSCopying, NSCoding>

 {
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutDimension *_heightAnchor;
    NSLayoutDimension *_widthAnchor;
    NSString *_name;
    id *_reserved1;
}


@property (readonly, copy) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSLayoutPoint *centerLayoutPoint;
@property (readonly, copy) NSLayoutXAxisAnchor *centerXAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly, copy) NSLayoutDimension *heightAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *leadingAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *topAnchor;
@property (readonly, copy) NSLayoutXAxisAnchor *trailingAnchor;
@property (readonly, copy) NSLayoutDimension *widthAnchor;


+(id)layoutRectWithCenterLayoutPoint:(id)arg0 widthAnchor:(id)arg1 heightAnchor:(id)arg2 ;
+(id)layoutRectWithLeadingAnchor:(id)arg0 topAnchor:(id)arg1 trailingAnchor:(id)arg2 bottomAnchor:(id)arg3 ;
+(id)layoutRectWithLeadingAnchor:(id)arg0 topAnchor:(id)arg1 widthAnchor:(id)arg2 heightAnchor:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)nsli_isLegalConstraintItem;
-(id)_equationDescriptionInParent;
-(id)constraintsContainingWithinLayoutRect:(id)arg0 ;
-(id)constraintsEqualToLayoutRect:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeadingAnchor:(id)arg0 topAnchor:(id)arg1 widthAnchor:(id)arg2 heightAnchor:(id)arg3 ;
-(id)layoutRectByInsettingTop:(CGFloat)arg0 leading:(CGFloat)arg1 bottom:(CGFloat)arg2 trailing:(CGFloat)arg3 ;
-(id)layoutRectByInsettingTopWithDimension:(id)arg0 leadingWithDimension:(id)arg1 bottomWithDimension:(id)arg2 trailingWithDimension:(id)arg3 ;
-(id)layoutRectBySlicingWithDimension:(id)arg0 fromEdge:(NSInteger)arg1 ;
-(id)layoutRectBySlicingWithDistance:(CGFloat)arg0 fromEdge:(NSInteger)arg1 ;
-(id)layoutRectBySlicingWithProportion:(CGFloat)arg0 fromEdge:(NSInteger)arg1 ;
-(id)layoutRectWithName:(id)arg0 ;
-(id)nsli_superitem;
-(id)observableValueInItem:(id)arg0 ;
-(id)ruleContainingLayoutRect:(id)arg0 ;
-(id)ruleEqualToLayoutRect:(id)arg0 ;
-(struct CGRect )valueInItem:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif