// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVPUSHNOTIFICATIONPARAMETERS_H
#define SSVPUSHNOTIFICATIONPARAMETERS_H

@class NSMutableDictionary, NSNumber, NSString, NSArray, NSDictionary;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying>

 {
    NSMutableDictionary *_parameterDictionary;
}


@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *environmentName; // ivar: _environmentName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mediaKinds;
@property (copy, nonatomic) NSString *notificationType;
@property (copy, nonatomic) NSDictionary *putParameters;
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (readonly) Class superclass;


-(id)_copyParametersDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForParameter:(id)arg0 ;
-(void)setValue:(id)arg0 forParameter:(id)arg1 ;


@end


#endif