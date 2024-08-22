// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNBUNDLEMETADATA_H
#define LNBUNDLEMETADATA_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNBundleMetadataGeneratorDescription.h"

@interface LNBundleMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *autoShortcutProviderMangledName; // ivar: _autoShortcutProviderMangledName
@property (readonly, copy, nonatomic) NSArray *autoShortcuts; // ivar: _autoShortcuts
@property (readonly, copy, nonatomic) NSDictionary *entities; // ivar: _entities
@property (readonly, copy, nonatomic) NSDictionary *enums; // ivar: _enums
@property (readonly, copy, nonatomic) LNBundleMetadataGeneratorDescription *generator; // ivar: _generator
@property (readonly, copy, nonatomic) NSDictionary *queries; // ivar: _queries
@property (readonly, nonatomic) NSInteger shortcutTileColor; // ivar: _shortcutTileColor
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(NSInteger)latestMetadataVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithActions:(id)arg0 entities:(id)arg1 queries:(id)arg2 enums:(id)arg3 ;
-(id)initWithActions:(id)arg0 entities:(id)arg1 queries:(id)arg2 enums:(id)arg3 autoShortcutProviderMangledName:(id)arg4 autoShortcuts:(id)arg5 shortcutTileColor:(NSInteger)arg6 version:(NSInteger)arg7 generator:(id)arg8 ;
-(id)initWithActions:(id)arg0 entities:(id)arg1 queries:(id)arg2 enums:(id)arg3 autoShortcutProviderMangledName:(id)arg4 autoShortcuts:(id)arg5 version:(NSInteger)arg6 generator:(id)arg7 ;
-(id)initWithActions:(id)arg0 entities:(id)arg1 queries:(id)arg2 enums:(id)arg3 autoShortcuts:(id)arg4 version:(NSInteger)arg5 generator:(id)arg6 ;
-(id)initWithActions:(id)arg0 entities:(id)arg1 queries:(id)arg2 enums:(id)arg3 version:(NSInteger)arg4 ;
-(id)initWithActions:(id)arg0 entities:(id)arg1 queries:(id)arg2 enums:(id)arg3 version:(NSInteger)arg4 generator:(id)arg5 ;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)verboseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif