// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTENTSIZECATEGORYPREFERENCE_H
#define UICONTENTSIZECATEGORYPREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIContentSizeCategoryPreference : NSObject

@property (retain, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay; // ivar: _preferredContentSizeCategoryCarPlay


+(id)system;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg0 ;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg0 forBlock:(id)arg1 ;
+(void)_populateUserDefaultsContentSizeCategory:(*id)arg0 carPlay:(*id)arg1 ;
+(void)_resetSystemPreferenceOverride;
+(void)asyncOverrideSystemWithPreference:(id)arg0 ;
+(void)asyncResetSystemPreferenceOverride;
+(void)overrideSystemWithPreference:(id)arg0 ;
+(void)overrideSystemWithPreference:(id)arg0 forBlock:(id)arg1 ;
+(void)resetSystemPreferenceOverride;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithContentSizeCategory:(id)arg0 ;
-(id)initWithContentSizeCategory:(id)arg0 carPlay:(id)arg1 ;
-(id)initWithRawUserDefaults;
-(void)checkForChanges;


@end


#endif