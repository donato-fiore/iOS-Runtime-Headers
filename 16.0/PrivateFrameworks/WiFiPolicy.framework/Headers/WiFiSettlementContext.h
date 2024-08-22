// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFISETTLEMENTCONTEXT_H
#define WIFISETTLEMENTCONTEXT_H

@class NSDate, NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface WiFiSettlementContext : NSObject

@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (retain, nonatomic) NSSet *strongestBSSIDs; // ivar: _strongestBSSIDs
@property (retain, nonatomic) NSArray *strongestNetworks; // ivar: _strongestNetworks


+(BOOL)networkQualifiesForSettlement:(id)arg0 ;
-(BOOL)compareWithScanResults:(id)arg0 ;
-(id)initWithNetworks:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)_updateStrongestNetworks:(id)arg0 ;
-(void)updateNetworks:(id)arg0 ;


@end


#endif