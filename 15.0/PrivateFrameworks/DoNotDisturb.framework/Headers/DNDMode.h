// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMODE_H
#define DNDMODE_H

@class NSUUID, NSString, NSURL;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDMode : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) NSInteger semanticType; // ivar: _semanticType
@property (readonly, copy, nonatomic) NSURL *settingsURL;
@property (readonly, copy, nonatomic) NSURL *setupURL;
@property (readonly, copy, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property (readonly, copy, nonatomic) NSString *tintColorName; // ivar: _tintColorName
@property (readonly, nonatomic) NSUInteger visibility; // ivar: _visibility


+(BOOL)supportsSecureCoding;
+(NSUInteger)maxUIAddableModes;
+(id)defaultMode;
+(id)defaultTintColorName;
+(id)placeholderModeFromMode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 modeIdentifier:(id)arg1 symbolImageName:(id)arg2 tintColorName:(id)arg3 semanticType:(NSInteger)arg4 ;
-(id)initWithName:(id)arg0 modeIdentifier:(id)arg1 symbolImageName:(id)arg2 tintColorName:(id)arg3 semanticType:(NSInteger)arg4 visibility:(NSUInteger)arg5 identifier:(id)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif