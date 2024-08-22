// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISHEETPRESENTATIONCONTROLLERAPPEARANCE_H
#define _UISHEETPRESENTATIONCONTROLLERAPPEARANCE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UISheetPresentationControllerAppearance : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=_isDimmingAlwaysVisible) BOOL _dimmingAlwaysVisible;
@property (readonly, nonatomic) NSString *_largestUndimmedDetentIdentifier; // ivar: __largestUndimmedDetentIdentifier
@property (readonly, nonatomic) BOOL _prefersDimmingVisible; // ivar: __prefersDimmingVisible


+(BOOL)supportsSecureCoding;
+(id)appearancePreferringDimmingVisible:(BOOL)arg0 ;
+(id)appearanceWithLargestUndimmedDetentIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif