// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAPRIVACYVALIDATION_H
#define AAPRIVACYVALIDATION_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface AAPrivacyValidation : NSObject {
    ? denylistDescriptors;
}


@property (nonatomic, readonly) NSSet *denylistDescriptors;
@property (nonatomic, readonly) BOOL enabled; // ivar: enabled


+(id)default;
-(id)init;
-(id)withDenylistDescriptors:(id)arg0 ;
-(id)withEnabled:(BOOL)arg0 ;


@end


#endif