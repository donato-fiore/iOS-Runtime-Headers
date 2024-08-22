// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSUSERDEFAULTS_H
#define CNCONTACTSUSERDEFAULTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNContactsUserDefaults : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (nonatomic) NSInteger displayNameOrder;
@property (nonatomic) NSInteger shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (readonly, nonatomic) NSInteger sortOrder;


+(id)sharedDefaults;
+(void)flushSharedInstance;
-(NSInteger)lastIgnoredNewDuplicatesCount;
-(NSInteger)newContactDisplayNameOrder;
-(id)changeNotificationName;
-(id)filteredGroupAndContainerIDs;
-(id)init;
-(void)setFilteredGroupAndContainerIDs:(id)arg0 ;
-(void)setLastIgnoredNewDuplicatesCount:(NSInteger)arg0 ;


@end


#endif