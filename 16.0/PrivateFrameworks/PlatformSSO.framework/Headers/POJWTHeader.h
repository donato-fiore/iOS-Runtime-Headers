// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POJWTHEADER_H
#define POJWTHEADER_H

@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface POJWTHeader : NSObject

@property (readonly) NSString *alg;
@property (readonly) NSDictionary *allData;
@property (readonly) NSString *apu;
@property (readonly) NSString *apv;
@property (readonly) NSString *cty;
@property (retain) NSMutableDictionary *data; // ivar: _data
@property (readonly) NSString *enc;
@property (readonly) NSDictionary *epk;
@property (readonly) NSString *kid;
@property (readonly) NSNumber *p2c;
@property (readonly) NSString *p2s;
@property (readonly) NSString *typ;
@property (readonly) NSString *x5c;
@property (readonly) NSString *x5t;


-(id)description;
-(id)init;
-(id)initWithJWTData:(id)arg0 ;
-(id)mutableCopy;


@end


#endif