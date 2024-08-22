// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DUIIMAGECOMPONENT_H
#define _DUIIMAGECOMPONENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DUIImageComponent : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int contextID; // ivar: _contextID
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) BOOL hidesImage; // ivar: _hidesImage
@property (nonatomic) BOOL ignoresAccessibilityFilters; // ivar: _ignoresAccessibilityFilters
@property (nonatomic) NSUInteger renderID; // ivar: _renderID
@property (readonly, nonatomic) BOOL representsPortal;
@property (nonatomic) unsigned int slotID; // ivar: _slotID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)portalView;
-(void)_configurePortalLayer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif