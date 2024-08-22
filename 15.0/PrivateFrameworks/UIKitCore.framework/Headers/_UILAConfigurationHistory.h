// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILACONFIGURATIONHISTORY_H
#define _UILACONFIGURATIONHISTORY_H

@class NSSet, NSString;
@protocol _UILAPropertySource, NSCopying;

#import <Foundation/Foundation.h>


@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying>



@property (readonly, nonatomic) NSSet *_newlyHiddenItems; // ivar: _newlyHiddenItems
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems; // ivar: _newlyUnhiddenItems
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEstablishedBaseValues; // ivar: _hasEstablishedBaseValues
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInLayoutArrangementUpdateSection) BOOL inLayoutArrangementUpdateSection; // ivar: _inLayoutArrangementUpdateSection
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints; // ivar: _invalidBaselineConstraints
@property (nonatomic) BOOL layoutFillsCanvas; // ivar: _layoutFillsCanvas
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; // ivar: _layoutUsesCanvasMarginsWhenFilling
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_invalidateBaselineConstraint:(id)arg0 ;


@end


#endif