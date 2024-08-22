// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLSERVERRESPONSE_H
#define APODMLSERVERRESPONSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface APOdmlServerResponse : NSObject

@property (readonly, nonatomic) NSDictionary *featureValues; // ivar: _featureValues
@property (nonatomic) BOOL odmlEnabled; // ivar: _odmlEnabled


-(id)initWithSLPResponse:(id)arg0 ;
-(id)initWithSRPResponse:(id)arg0 ;


@end


#endif