// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHOWSCREENTIMEREQUESTSHEETCOMMAND_H
#define SFSHOWSCREENTIMEREQUESTSHEETCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFShowScreenTimeRequestSheetCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFShowScreenTimeRequestSheetCommand : SFCommand <SFShowScreenTimeRequestSheetCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif