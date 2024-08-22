// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VERSION_H
#define VERSION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface Version : NSObject <NSCopying>



@property (readonly) unsigned int bugfix; // ivar: _bugfix
@property (readonly) unsigned int major; // ivar: _major
@property (readonly) unsigned int minor; // ivar: _minor
@property (readonly) NSString *modifier; // ivar: _modifier


+(id)allVersionedKeysForKey:(id)arg0 modifier:(id)arg1 ;
+(id)pre3_15_0_Mapping;
+(id)versionZero;
-(BOOL)isAllDigitsInString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVersion:(id)arg0 ;
-(NSInteger)compareToVersion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getVersionAsString;
-(id)init;
-(id)initWithVersionString:(id)arg0 error:(*id)arg1 ;
-(id)versionedKey:(id)arg0 modifier:(id)arg1 ;


@end


#endif