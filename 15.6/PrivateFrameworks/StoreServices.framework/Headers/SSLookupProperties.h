// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSLOOKUPPROPERTIES_H
#define SSLOOKUPPROPERTIES_H

@class NSMutableDictionary, NSString, CLLocation, NSNumber;
@protocol NSCopying, SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding>

 {
    NSMutableDictionary *_requestParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) NSInteger localizationStyle; // ivar: _localizationStyle
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *timeoutInterval; // ivar: _timeoutInterval


-(id)copyRequestParameters;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForRequestParameter:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forRequestParameter:(id)arg1 ;


@end


#endif