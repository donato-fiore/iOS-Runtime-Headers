// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSNETWORKCONSTRAINTS_H
#define AMSNETWORKCONSTRAINTS_H

@class NSString, NSMutableDictionary;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSNetworkConstraints : NSObject <AMSBagConsumer>



@property (readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *sizeLimits; // ivar: _sizeLimits
@property (readonly) Class superclass;


+(id)_networkConstraintsForMediaType:(id)arg0 withArray:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)networkConstraintsForMediaType:(id)arg0 withBag:(id)arg1 ;
-(BOOL)hasSizeLimitForNetworkType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConstraints:(id)arg0 ;
-(NSInteger)_sizeLimitForNetworkType:(id)arg0 ;
-(NSInteger)sizeLimitForNetworkType:(id)arg0 ;
-(id)_initWithStoreConstraintDictionary:(id)arg0 ;
-(id)init;
-(void)_disableAllNetworkTypes;
-(void)_setSizeLimit:(NSInteger)arg0 forNetworkType:(id)arg1 ;


@end


#endif