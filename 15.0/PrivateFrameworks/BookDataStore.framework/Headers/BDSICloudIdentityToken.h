// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BDSICLOUDIDENTITYTOKEN_H
#define BDSICLOUDIDENTITYTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BDSICloudIdentityToken : NSObject

@property (copy, nonatomic) NSString *token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(id)_hashFor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromArchive:(id)arg0 ;
-(id)initWithCurrentIdentity;
-(id)initWithToken:(id)arg0 ;


@end


#endif