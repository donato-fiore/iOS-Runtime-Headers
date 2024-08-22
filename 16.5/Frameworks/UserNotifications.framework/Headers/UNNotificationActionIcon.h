// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNNOTIFICATIONACTIONICON_H
#define UNNOTIFICATIONACTIONICON_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic, getter=isSystemIcon) BOOL systemIcon; // ivar: _systemIcon


+(BOOL)supportsSecureCoding;
+(id)_iconWithImageName:(id)arg0 systemIcon:(BOOL)arg1 ;
+(id)iconWithSystemImageName:(id)arg0 ;
+(id)iconWithTemplateImageName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_description;
-(id)_initWithImageName:(id)arg0 systemIcon:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif