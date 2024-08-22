// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFINTERSTITIALCONFIGURATION_H
#define AFINTERSTITIALCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (readonly, nonatomic) BOOL isDucking; // ivar: _isDucking
@property (readonly, nonatomic) BOOL isTwoShot; // ivar: _isTwoShot
@property (readonly, nonatomic) BOOL isVoiceTrigger; // ivar: _isVoiceTrigger
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, copy, nonatomic) NSString *recordRoute; // ivar: _recordRoute
@property (readonly, nonatomic) NSUInteger speechEndHostTime; // ivar: _speechEndHostTime
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 languageCode:(id)arg1 gender:(NSInteger)arg2 recordRoute:(id)arg3 isVoiceTrigger:(BOOL)arg4 isDucking:(BOOL)arg5 isTwoShot:(BOOL)arg6 speechEndHostTime:(NSUInteger)arg7 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif