// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDFEATUREOBJECT_H
#define CLOUDFEATUREOBJECT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CloudFeatureObject : NSObject

@property (readonly, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, nonatomic) NSString *featureID; // ivar: _featureID
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


-(id)init;
-(id)initWithFeatureID:(id)arg0 status:(NSInteger)arg1 accessToken:(id)arg2 ;
-(id)initWithFeatureID:(id)arg0 status:(NSInteger)arg1 intValue:(NSInteger)arg2 accessToken:(id)arg3 ;
-(id)initWithFeatureID:(id)arg0 status:(NSInteger)arg1 value:(id)arg2 accessToken:(id)arg3 ;


@end


#endif