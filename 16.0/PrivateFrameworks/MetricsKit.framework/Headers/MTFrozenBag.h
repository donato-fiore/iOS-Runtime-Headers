// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFROZENBAG_H
#define MTFROZENBAG_H

@class NSDictionary, NSString, NSDate, AMSProcessInfo;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface MTFrozenBag : NSObject <AMSBagProtocol>



@property (copy, nonatomic) NSDictionary *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (copy, nonatomic) NSString *profile; // ivar: _profile
@property (copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithProfile:(id)arg0 profileVersion:(id)arg1 config:(id)arg2 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif