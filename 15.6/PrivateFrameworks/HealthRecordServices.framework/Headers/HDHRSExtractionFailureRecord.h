// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHRSEXTRACTIONFAILURERECORD_H
#define HDHRSEXTRACTIONFAILURERECORD_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger failureCode; // ivar: _failureCode
@property (readonly, copy, nonatomic) NSString *internalDisplaySafeDescription;
@property (readonly, copy, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (readonly, copy, nonatomic) NSString *resourceKeyPath; // ivar: _resourceKeyPath


+(BOOL)supportsSecureCoding;
+(id)extractionFailureRecordWithCode:(NSInteger)arg0 propertyName:(id)arg1 resourceKeyPath:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif