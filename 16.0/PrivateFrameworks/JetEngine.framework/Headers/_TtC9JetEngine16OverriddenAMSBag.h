// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9JETENGINE16OVERRIDDENAMSBAG_H
#define _TTC9JETENGINE16OVERRIDDENAMSBAG_H

@class AMSSnapshotBag, NSDate, NSString;
@protocol _TtP9JetEngine26DeprecatedOverriddenAMSBag_, AMSBagProtocol;



@interface _TtC9JetEngine16OverriddenAMSBag : AMSSnapshotBag <_TtP9JetEngine26DeprecatedOverriddenAMSBag_>

 {
    ? backing;
    ? overrides;
}


@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) NSObject<AMSBagProtocol> *replacingSnapshotIfNeeded;


-(BOOL)isExpired;
-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)forwardSnapshotBagExpiredValueAccessed:(id)arg0 ;


@end


#endif