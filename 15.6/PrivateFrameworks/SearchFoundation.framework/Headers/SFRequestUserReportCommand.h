// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFREQUESTUSERREPORTCOMMAND_H
#define SFREQUESTUSERREPORTCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFRequestUserReportCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFUserReportRequest.h"

@interface SFRequestUserReportCommand : SFCommand <SFRequestUserReportCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest; // ivar: _userReportRequest


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif