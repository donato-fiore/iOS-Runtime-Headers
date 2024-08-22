// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPFEATUREDISPLAYCONTEXT_H
#define ASCLOCKUPFEATUREDISPLAYCONTEXT_H

@class NSString;
@protocol ASCLockupFeature;

#import <Foundation/Foundation.h>

#import "ASCLockupDisplayContext.h"

@interface ASCLockupFeatureDisplayContext : NSObject <ASCLockupFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext; // ivar: _displayContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif