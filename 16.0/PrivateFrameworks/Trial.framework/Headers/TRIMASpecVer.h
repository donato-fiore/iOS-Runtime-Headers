// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIMASPECVER_H
#define TRIMASPECVER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIMASpecVer : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *specifier; // ivar: _specifier
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(id)specVerWithSpecifier:(id)arg0 version:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSpecVer:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementSpecifier:(id)arg0 ;
-(id)copyWithReplacementVersion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSpecifier:(id)arg0 version:(id)arg1 ;


@end


#endif