// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UMUSERSWITCHCONTEXT_H
#define UMUSERSWITCHCONTEXT_H

@class NSDictionary, NSData, NSString;

#import <Foundation/Foundation.h>


@interface UMUserSwitchContext : NSObject

@property (copy, nonatomic) NSDictionary *environmentsByServices; // ivar: _environmentsByServices
@property (nonatomic) BOOL secondaryActionRequired; // ivar: _secondaryActionRequired
@property (copy, nonatomic) NSData *setupData; // ivar: _setupData
@property (copy, nonatomic) NSString *shortLivedToken; // ivar: _shortLivedToken


+(id)contextWithDataRepresentation:(id)arg0 ;
+(id)contextWithSetupData:(id)arg0 shortLivedToken:(id)arg1 secondaryActionRequired:(BOOL)arg2 ;
+(void)_switchEnvironmentsByServices:(id)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)dictRepresentation;


@end


#endif