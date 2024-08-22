// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RADIOREQUESTCONTEXT_H
#define RADIOREQUESTCONTEXT_H

@class SSVFairPlaySAPSession;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RadioRequestContext : NSObject <NSCopying>



@property (retain, nonatomic) SSVFairPlaySAPSession *SAPSession; // ivar: _SAPSession
@property (nonatomic) BOOL usesLocalNetworking; // ivar: _usesLocalNetworking


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif