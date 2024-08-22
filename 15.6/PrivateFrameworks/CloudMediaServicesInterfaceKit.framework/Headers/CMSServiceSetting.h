// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSSERVICESETTING_H
#define CMSSERVICESETTING_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSServiceSetting : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowExplicitContent; // ivar: _allowExplicitContent
@property (nonatomic) BOOL updateListeningHistory; // ivar: _updateListeningHistory


+(BOOL)supportsSecureCoding;
+(id)settingDictionaryFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif