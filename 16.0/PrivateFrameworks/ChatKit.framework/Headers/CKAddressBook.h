// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKADDRESSBOOK_H
#define CKADDRESSBOOK_H


#import <Foundation/Foundation.h>


@interface CKAddressBook : NSObject



+(id)contactImageCache;
+(id)contactImageOfDiameter:(CGFloat)arg0 forID:(id)arg1 monogramStyle:(NSInteger)arg2 tintMonogramText:(BOOL)arg3 ;
+(id)contactImageOfDiameter:(CGFloat)arg0 forID:(id)arg1 monogramStyle:(NSInteger)arg2 tintMonogramText:(BOOL)arg3 customFont:(id)arg4 ;
+(id)locationSharingContactImageOfDiameter:(CGFloat)arg0 forID:(id)arg1 useCustomFont:(BOOL)arg2 ;
+(id)monogrammerProvider;
+(id)monogrammerWithDiameter:(CGFloat)arg0 style:(NSInteger)arg1 useAppTintColor:(BOOL)arg2 customFont:(id)arg3 ;
+(id)placeholderContactImageOfDiameter:(CGFloat)arg0 monogramStyle:(NSInteger)arg1 tintMonogramText:(BOOL)arg2 ;
+(id)transcriptContactImageOfDiameter:(CGFloat)arg0 forID:(id)arg1 ;
+(void)flushMonogrammers;


@end


#endif