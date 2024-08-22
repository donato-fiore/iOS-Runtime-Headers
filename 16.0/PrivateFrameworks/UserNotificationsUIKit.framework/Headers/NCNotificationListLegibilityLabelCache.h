// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTLEGIBILITYLABELCACHE_H
#define NCNOTIFICATIONLISTLEGIBILITYLABELCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NCNotificationListLegibilityLabelCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary; // ivar: _sectionHeaderViewLegibilityLabelDictionary


+(id)sharedInstance;
-(id)_createLegibilityLabelWithTitle:(id)arg0 font:(id)arg1 ;
-(id)_stringDescriptorForFont:(id)arg0 ;
-(id)init;
-(id)legibilityLabelForTitle:(id)arg0 forSuperview:(id)arg1 font:(id)arg2 ;
-(void)clearAll;


@end


#endif