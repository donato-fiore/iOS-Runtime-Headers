// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCODESIGNINFO_H
#define MCMCODESIGNINFO_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface MCMCodeSignInfo : NSObject

@property (readonly, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) unsigned int platform; // ivar: _platform


-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithURL:(id)arg0 error:(*NSUInteger)arg1 ;


@end


#endif