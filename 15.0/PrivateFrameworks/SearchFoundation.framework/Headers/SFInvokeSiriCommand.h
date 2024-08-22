// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFINVOKESIRICOMMAND_H
#define SFINVOKESIRICOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFInvokeSiriCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFInvokeSiriCommand : SFCommand <SFInvokeSiriCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *utteranceText; // ivar: _utteranceText


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif