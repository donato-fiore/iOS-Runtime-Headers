// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDLAYOUTSTATE_H
#define TIKEYBOARDLAYOUTSTATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL canMultitap; // ivar: _canMultitap
@property (nonatomic) BOOL diacriticForwardCompose; // ivar: _diacriticForwardCompose
@property (nonatomic) BOOL hasAccentKey; // ivar: _hasAccentKey
@property (nonatomic) BOOL hasCandidateKey; // ivar: _hasCandidateKey
@property (copy, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (nonatomic) BOOL isAlphabeticPlane; // ivar: _isAlphabeticPlane
@property (nonatomic) BOOL isKanaPlane; // ivar: _isKanaPlane
@property (copy, nonatomic) NSString *layoutTag; // ivar: _layoutTag
@property (readonly, nonatomic) NSString *softwareLayout;
@property (nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif