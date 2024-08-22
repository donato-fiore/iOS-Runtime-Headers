// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKNOTICERECIPE_H
#define CNKNOTICERECIPE_H

@class UIImage, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNKNoticeRecipe : NSObject <NSSecureCoding>

 {
    ? title;
    ? subtitle;
    ? primaryActionTitle;
    ? secondaryActionTitle;
    ? uuid;
}


@property (nonatomic, readonly) UIImage *image; // ivar: image
@property (nonatomic, readonly) NSString *primaryActionTitle;
@property (nonatomic, readonly) NSString *secondaryActionTitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSUUID *uuid;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 primaryActionTitle:(id)arg3 secondaryActionTitle:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif