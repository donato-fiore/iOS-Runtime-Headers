// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSDISPLAY_H
#define PSDISPLAY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSDisplay : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}




+(BOOL)supportsSecureCoding;
+(id)builtinDisplay;
+(id)displayWithHardwareIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithHardwareIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hardwareIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif