// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSOSMETRIC_H
#define IDSSOSMETRIC_H

@class NSString;
@protocol CUTSOSMetric;

#import <Foundation/Foundation.h>


@interface IDSSOSMetric : NSObject <CUTSOSMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (retain, nonatomic) NSString *operationID; // ivar: _operationID
@property (nonatomic) NSUInteger sosDomain; // ivar: _sosDomain
@property (nonatomic) NSInteger sosError; // ivar: _sosError
@property (nonatomic) NSUInteger sosType; // ivar: _sosType
@property (readonly) Class superclass;


+(id)metricWithDomain:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(NSInteger)arg2 bagURL:(id)arg3 ;
-(id)initWithDomain:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(NSInteger)arg2 bagURL:(id)arg3 ;


@end


#endif