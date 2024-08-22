// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBOOKMARK_H
#define SBBOOKMARK_H

@class SBHBookmark, FBSApplicationDataStore, NSString, NSDate;
@protocol UISApplicationStateServiceDataSource, NSCopying;



@interface SBBookmark : SBHBookmark <UISApplicationStateServiceDataSource>

 {
    BOOL _hasBadgeValue;
}


@property (copy, nonatomic) NSObject<NSCopying> *badgeValue;
@property (readonly, nonatomic) FBSApplicationDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *nextWakeDate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBackgroundNetwork;


-(BOOL)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(BOOL)isTimedOutForIcon:(id)arg0 ;
-(id)badgeNumberOrStringForIcon:(id)arg0 ;
-(id)initWithWebClip:(id)arg0 ;
-(void)_noteIconDataSourceDidChange;


@end


#endif