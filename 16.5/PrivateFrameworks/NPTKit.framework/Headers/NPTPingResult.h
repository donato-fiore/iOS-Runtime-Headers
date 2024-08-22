// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTPINGRESULT_H
#define NPTPINGRESULT_H

@class NSString, NSDictionary, NSError, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NPTPingResult : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property CGFloat maxLatency; // ivar: _maxLatency
@property CGFloat meanLatency; // ivar: _meanLatency
@property CGFloat minLatency; // ivar: _minLatency
@property CGFloat percentLost; // ivar: _percentLost
@property (retain, nonatomic) NSArray *pings; // ivar: _pings
@property CGFloat standardDeviation; // ivar: _standardDeviation


+(BOOL)supportsSecureCoding;
-(CGFloat)calculateStandardDeviation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPings:(id)arg0 usingAddress:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateFields;


@end


#endif