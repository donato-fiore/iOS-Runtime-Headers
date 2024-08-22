// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFUSERSETTINGS_H
#define CWFUSERSETTINGS_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CWFUserSettings : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *OSSpecificAttributes; // ivar: _OSSpecificAttributes
@property (nonatomic) NSInteger askToJoinMode; // ivar: _askToJoinMode
@property (nonatomic) NSInteger autoHotspotMode; // ivar: _autoHotspotMode
@property (nonatomic) NSInteger compatibilityMode; // ivar: _compatibilityMode
@property (nonatomic) NSInteger syncMode; // ivar: _syncMode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUserSettings:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif