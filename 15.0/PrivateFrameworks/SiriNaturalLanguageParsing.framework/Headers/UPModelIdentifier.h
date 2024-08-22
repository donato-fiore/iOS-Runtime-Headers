// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPMODELIDENTIFIER_H
#define UPMODELIDENTIFIER_H

@class NSString, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UPModelIdentifier : NSObject <NSCopying>



@property (readonly, copy) NSString *appBundleId; // ivar: _appBundleId
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppBundleId:(id)arg0 ;


@end


#endif