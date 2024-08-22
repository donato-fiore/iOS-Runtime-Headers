// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVAPPINFO_H
#define CKVAPPINFO_H

@class NSString;
@protocol CKVocabularyItem;

#import <Foundation/Foundation.h>


@interface CKVAppInfo : NSObject <CKVocabularyItem>



@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayAppName; // ivar: _displayAppName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemId; // ivar: _itemId
@property (readonly) Class superclass;


+(id)appInfoFromInstalledApp:(id)arg0 languageCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInstalledApp:(id)arg0 languageCode:(id)arg1 ;
-(id)initWithItemId:(id)arg0 bundleId:(id)arg1 appName:(id)arg2 displayAppName:(id)arg3 ;


@end


#endif