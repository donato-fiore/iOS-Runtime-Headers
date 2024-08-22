// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSBANNERITEM_H
#define CPSBANNERITEM_H

@class NSArray, NSString, NSUUID, CPImageSet;

#import <Foundation/Foundation.h>


@interface CPSBannerItem : NSObject

@property (readonly, nonatomic) NSArray *attributedDetailTextVariants; // ivar: _attributedDetailTextVariants
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSArray *detailTextVariants; // ivar: _detailTextVariants
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (readonly, nonatomic) NSArray *textVariants; // ivar: _textVariants


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBannerItem:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 textVariants:(id)arg2 detailTextVariants:(id)arg3 attributedDetailTextVariants:(id)arg4 imageSet:(id)arg5 ;


@end


#endif