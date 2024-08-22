// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCENECONFIGURATION_H
#define UISCENECONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIStoryboard.h"

@interface UISceneConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    Class _sceneClass;
    Class _delegateClass;
    UIStoryboard *_storyboard;
}


@property (readonly, nonatomic) BOOL _fromPlist; // ivar: _fromPlist
@property (readonly, nonatomic) BOOL _hadResolutionErrorsOnLoad; // ivar: _hadResolutionErrorsOnLoad
@property (readonly, nonatomic) BOOL _isDefault; // ivar: _isDefault
@property (retain, nonatomic) Class delegateClass;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *role; // ivar: _role
@property (retain, nonatomic) Class sceneClass;
@property (retain, nonatomic) UIStoryboard *storyboard;


+(BOOL)supportsSecureCoding;
+(id)configurationWithName:(id)arg0 sessionRole:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)_initWithLoadErrorForSessionRole:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 sessionRole:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif