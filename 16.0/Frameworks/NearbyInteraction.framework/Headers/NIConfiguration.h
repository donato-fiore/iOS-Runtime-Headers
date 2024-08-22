// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NICONFIGURATION_H
#define NICONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>



@property NSUInteger enabledGestures; // ivar: _enabledGestures
@property BOOL supportsCameraAssistance; // ivar: _supportsCameraAssistance
@property NSUInteger suspensionPolicy; // ivar: _suspensionPolicy


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)_internalIsCameraAssistanceEnabled;
-(BOOL)hasEqualEnabledGestures:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionInternal;
-(id)init;
-(id)initInternal;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif