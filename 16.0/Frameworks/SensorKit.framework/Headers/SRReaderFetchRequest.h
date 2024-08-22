// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRREADERFETCHREQUEST_H
#define SRREADERFETCHREQUEST_H

@class NSString;
@protocol SRRequestFetching, SRRequestReading;

#import <Foundation/Foundation.h>


@interface SRReaderFetchRequest : NSObject <SRRequestFetching>

 {
    id<SRRequestReading> *_readerRequest;
}


@property (retain, nonatomic) NSString *bundleIdentifier;
@property BOOL bypassHoldingPeriod; // ivar: _bypassHoldingPeriod
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property CGFloat from; // ivar: _from
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *sensor;
@property (readonly) Class superclass;
@property CGFloat to; // ivar: _to


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif