// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUSERREPORTREQUEST_H
#define SFUSERREPORTREQUEST_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFUserReportRequest, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFUserReportRequest : NSObject <SFUserReportRequest, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *affordanceText; // ivar: _affordanceText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *dismissText; // ivar: _dismissText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *userReportOptions; // ivar: _userReportOptions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif