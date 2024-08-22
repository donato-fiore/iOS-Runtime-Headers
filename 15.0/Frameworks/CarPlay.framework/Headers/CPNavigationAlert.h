// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPNAVIGATIONALERT_H
#define CPNAVIGATIONALERT_H

@class NSUUID, UIImage, NSArray;
@protocol NSSecureCoding, CPNavigationAlertUpdating;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"
#import "CPAlertAction.h"

@interface CPNavigationAlert : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (weak, nonatomic) NSObject<CPNavigationAlertUpdating> *navigationAlertUpdateTarget; // ivar: _navigationAlertUpdateTarget
@property (readonly, nonatomic) CPAlertAction *primaryAction; // ivar: _primaryAction
@property (readonly, nonatomic) CPAlertAction *secondaryAction; // ivar: _secondaryAction
@property (readonly, copy, nonatomic) NSArray *subtitleVariants; // ivar: _subtitleVariants
@property (readonly, copy, nonatomic) NSArray *titleVariants; // ivar: _titleVariants


+(BOOL)supportsSecureCoding;
-(id)_initWithTitleVariants:(id)arg0 subtitleVariants:(id)arg1 imageSet:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 duration:(CGFloat)arg5 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitleVariants:(id)arg0 subtitleVariants:(id)arg1 image:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 duration:(CGFloat)arg5 ;
-(id)initWithTitleVariants:(id)arg0 subtitleVariants:(id)arg1 imageSet:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 duration:(CGFloat)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateTitleVariants:(id)arg0 subtitleVariants:(id)arg1 ;


@end


#endif