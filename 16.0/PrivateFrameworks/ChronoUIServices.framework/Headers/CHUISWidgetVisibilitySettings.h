// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWIDGETVISIBILITYSETTINGS_H
#define CHUISWIDGETVISIBILITYSETTINGS_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CHUISWidgetVisibilitySettings : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>

 {
    BOOL _settled;
    CGRect _visibleBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isSettled) BOOL settled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect visibleBounds;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithVisibilitySettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif