// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGECONDITIONALROUTERUBCONFIGURATION_H
#define BWSTILLIMAGECONDITIONALROUTERUBCONFIGURATION_H

@class NSArray;


#import "BWStillImageConditionalRouterConfiguration.h"

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) NSArray *portTypes; // ivar: _portTypes


+(id)configurationWithPortTypes:(id)arg0 ;
-(NSUInteger)outputIndexForPortType:(id)arg0 ;
-(id)initWithPortTypes:(id)arg0 ;
-(void)dealloc;


@end


#endif