// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9JETENGINE8PROXYBAG_H
#define _TTC9JETENGINE8PROXYBAG_H

@class NSDate, NSString;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface _TtC9JetEngine8ProxyBag : NSObject <AMSBagProtocol>

 {
    ? bag;
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
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif