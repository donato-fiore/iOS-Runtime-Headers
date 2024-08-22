// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCOLORGROUP_H
#define SBSCOLORGROUP_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBSColor.h"

@interface SBSColorGroup : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SBSColor *background; // ivar: _background
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) SBSColor *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) SBSColor *secondaryText; // ivar: _secondaryText


+(BOOL)supportsSecureCoding;
-(id)initWithBackground:(id)arg0 primaryText:(id)arg1 secondaryText:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif