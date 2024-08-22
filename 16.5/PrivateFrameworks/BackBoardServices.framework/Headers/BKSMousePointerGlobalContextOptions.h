// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSMOUSEPOINTERGLOBALCONTEXTOPTIONS_H
#define BKSMOUSEPOINTERGLOBALCONTEXTOPTIONS_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionStreamable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface BKSMousePointerGlobalContextOptions : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying, NSMutableCopying>

 {
    BOOL _pinOnButtonDown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL pinOnButtonDown;
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