// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISAMSBAGSHIM_H
#define ISAMSBAGSHIM_H

@class SSBag, NSString, NSDate, AMSProcessInfo;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "ISURLBag.h"

@interface ISAMSBagShim : NSObject <AMSBagProtocol>



@property (retain, nonatomic) ISURLBag *URLBag; // ivar: _URLBag
@property (retain, nonatomic) SSBag *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isLoaded;
-(id)URLForKey:(id)arg0 ;
-(id)_bagValueForKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithBag:(id)arg0 ;
-(id)initWithURLBag:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;


@end


#endif