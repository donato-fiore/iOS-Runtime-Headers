// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDATAENTRY_H
#define _UISTATUSBARDATAENTRY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIStatusBarDataEntry : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


+(BOOL)supportsSecureCoding;
+(id)disabledEntry;
+(id)entry;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initFromData:(struct ? *)arg0 type:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif