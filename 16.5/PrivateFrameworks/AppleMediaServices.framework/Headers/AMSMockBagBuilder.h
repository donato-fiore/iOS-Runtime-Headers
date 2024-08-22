// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMOCKBAGBUILDER_H
#define AMSMOCKBAGBUILDER_H

@class NSMutableDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AMSMockBagBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *data; // ivar: _data
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion


-(id)createMockBag;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)addBagKey:(id)arg0 value:(id)arg1 valueType:(NSUInteger)arg2 ;
-(void)unionBagKeySet:(id)arg0 ;


@end


#endif