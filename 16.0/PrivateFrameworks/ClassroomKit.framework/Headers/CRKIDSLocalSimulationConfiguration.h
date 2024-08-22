// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKIDSLOCALSIMULATIONCONFIGURATION_H
#define CRKIDSLOCALSIMULATIONCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKIDSLocalSimulationConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) BOOL shouldForceAccountsInactive; // ivar: _shouldForceAccountsInactive


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif