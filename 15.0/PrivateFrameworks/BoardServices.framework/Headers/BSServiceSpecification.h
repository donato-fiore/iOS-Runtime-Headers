// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSERVICESPECIFICATION_H
#define BSSERVICESPECIFICATION_H

@class NSDictionary, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding>

 {
    NSDictionary *_options;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDerived) BOOL derived; // ivar: _derived
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHiddenAtLaunch) BOOL hiddenAtLaunch; // ivar: _hiddenAtLaunch
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)optionForKey:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif