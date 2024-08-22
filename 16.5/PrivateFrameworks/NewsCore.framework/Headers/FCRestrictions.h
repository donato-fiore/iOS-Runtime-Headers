// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCRESTRICTIONS_H
#define FCRESTRICTIONS_H


#import <Foundation/Foundation.h>


@interface FCRestrictions : NSObject

@property (nonatomic) NSInteger buildVersionNumber; // ivar: _buildVersionNumber
@property (readonly, nonatomic) BOOL isExplicitContentAllowed;
@property (nonatomic) NSInteger isExplicitContentAllowedOverride; // ivar: _isExplicitContentAllowedOverride
@property (nonatomic) BOOL testing; // ivar: _testing


+(NSInteger)integerRepresentationOfShortVersionString:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isContentAllowedInStorefrontID:(id)arg0 withAllowedStorefrontIDs:(id)arg1 blockedStorefrontIDs:(id)arg2 ;
-(BOOL)isContentBlockedInStorefrontID:(id)arg0 withAllowedStorefrontIDs:(id)arg1 blockedStorefrontIDs:(id)arg2 ;
-(BOOL)isNewsVersionAllowed:(NSInteger)arg0 ;
-(BOOL)isNewsVersionAllowedWithMinNewsVersion:(NSInteger)arg0 maxNewsVersion:(NSInteger)arg1 ;
-(id)init;
-(void)t_startForcingExplicitContentDisallowed;
-(void)t_stopForcingExplicitContentDisallowed;


@end


#endif