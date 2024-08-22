// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDWEBAPPLICATIONIDENTIFIER_H
#define DNDWEBAPPLICATIONIDENTIFIER_H

@class NSString;
@protocol DNDDiffBuilding, DNDEventSourceIdentifying;

#import <Foundation/Foundation.h>


@interface DNDWebApplicationIdentifier : NSObject <DNDDiffBuilding, DNDEventSourceIdentifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger platform;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *webIdentifier; // ivar: _webIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWebIdentifier:(id)arg0 givenName:(id)arg1 ;
-(void)diffAgainstObject:(id)arg0 usingDiffBuilder:(id)arg1 withDescription:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif