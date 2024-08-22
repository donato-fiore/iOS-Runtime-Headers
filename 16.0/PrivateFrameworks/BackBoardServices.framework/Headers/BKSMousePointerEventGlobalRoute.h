// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSMOUSEPOINTEREVENTGLOBALROUTE_H
#define BKSMOUSEPOINTEREVENTGLOBALROUTE_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable;

#import <Foundation/Foundation.h>

#import "BKSMousePointerGlobalContextOptions.h"

@interface BKSMousePointerEventGlobalRoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable>

 {
    unsigned int _contextID;
    BKSMousePointerGlobalContextOptions *_options;
}


@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BKSMousePointerGlobalContextOptions *options;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)build:(id)arg0 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif