// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCSINGLEAPPPAYLOAD_H
#define MCSINGLEAPPPAYLOAD_H

@class NSString;


#import "MCAppWhitelistPayloadBase.h"

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (readonly, nonatomic) BOOL allowLogout; // ivar: _allowLogout
@property (readonly, nonatomic) NSString *applicationBundleID;


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)mustInstallNonInteractively;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)restrictions;
-(id)subtitle1Description;
-(id)subtitle1Label;


@end


#endif