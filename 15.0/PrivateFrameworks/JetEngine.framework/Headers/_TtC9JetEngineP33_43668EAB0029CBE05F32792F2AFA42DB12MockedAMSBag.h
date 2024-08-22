// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9JETENGINEP33_43668EAB0029CBE05F32792F2AFA42DB12MOCKEDAMSBAG_H
#define _TTC9JETENGINEP33_43668EAB0029CBE05F32792F2AFA42DB12MOCKEDAMSBAG_H

@class AMSSnapshotBag, NSDate, NSString;



@interface _TtC9JetEngineP33_43668EAB0029CBE05F32792F2AFA42DB12MockedAMSBag : AMSSnapshotBag {
    ? bagProfile;
    ? stubs;
}


@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;


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


@end


#endif