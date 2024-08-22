// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBDOMAIN_H
#define MOWEBDOMAIN_H

@class NSString;
@protocol MOPersistable;

#import <Foundation/Foundation.h>


@interface MOWebDomain : NSObject <MOPersistable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *persistableValue;
@property (readonly) Class superclass;


+(BOOL)compareDomain:(id)arg0 withDomainPattern:(id)arg1 outExactMatch:(*BOOL)arg2 ;
+(BOOL)isValidPersistableRepresentation:(id)arg0 ;
+(id)initializeWithPersistableValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDomain:(id)arg0 ;


@end


#endif