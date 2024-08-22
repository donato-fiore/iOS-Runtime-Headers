// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDEBUGHIERARCHYMUTABLEELEMENT_H
#define PXDEBUGHIERARCHYMUTABLEELEMENT_H

@class NSString;
@protocol PXDebugHierarchyElement, NSCopying;

#import <Foundation/Foundation.h>


@interface PXDebugHierarchyMutableElement : NSObject <PXDebugHierarchyElement, NSCopying>



@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) *CGColor backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL canHaveChildren; // ivar: _canHaveChildren
@property (retain, nonatomic) NSString *contentsGravity; // ivar: _contentsGravity
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger parentIdentifier; // ivar: _parentIdentifier
@property (nonatomic) *CGImage previewImage; // ivar: _previewImage
@property (nonatomic) CGFloat zPosition; // ivar: _zPosition


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)prepareForReuse;


@end


#endif