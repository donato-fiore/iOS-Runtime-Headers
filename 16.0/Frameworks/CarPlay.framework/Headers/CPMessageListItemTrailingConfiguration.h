// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPMESSAGELISTITEMTRAILINGCONFIGURATION_H
#define CPMESSAGELISTITEMTRAILINGCONFIGURATION_H

@class UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"

@interface CPMessageListItemTrailingConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) UIImage *trailingImage;
@property (retain, nonatomic) CPImageSet *trailingImageSet; // ivar: _trailingImageSet
@property (readonly, nonatomic) NSInteger trailingItem; // ivar: _trailingItem


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrailingItem:(NSInteger)arg0 trailingImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif