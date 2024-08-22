// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFUSERNAMEFORMATTER_H
#define HFUSERNAMEFORMATTER_H

@class NSFormatter, CNContactFormatter, HMHome;



@interface HFUserNameFormatter : NSFormatter

@property (readonly, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger style; // ivar: _style


+(NSInteger)_contactFormatterStyleForUserNameStyle:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif