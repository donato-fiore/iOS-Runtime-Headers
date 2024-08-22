// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNNOTIFICATIONICON_H
#define UNNOTIFICATIONICON_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding>

 {
    id *_iconInfo;
    NSInteger _iconInfoType;
}




+(BOOL)supportsSecureCoding;
+(id)iconAtPath:(id)arg0 ;
+(id)iconForApplicationIdentifier:(id)arg0 ;
+(id)iconForSystemImageNamed:(id)arg0 ;
+(id)iconNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIconInfo:(id)arg0 type:(NSInteger)arg1 ;
-(id)applicationIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(id)path;
-(id)systemImageName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif