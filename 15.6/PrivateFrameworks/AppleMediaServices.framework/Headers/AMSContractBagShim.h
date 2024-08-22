// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCONTRACTBAGSHIM_H
#define AMSCONTRACTBAGSHIM_H

@class NSString, NSDate;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSContractBagShim : NSObject <AMSBagProtocol>



@property (retain, nonatomic) NSObject *bagContract; // ivar: _bagContract
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;


+(id)_callSelector:(SEL)arg0 onBagContract:(id)arg1 ;
-(BOOL)isLoaded;
-(SEL)_selectorForBagKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)_bagValueForBagKey:(id)arg0 bagValueType:(NSUInteger)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithBagContract:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif