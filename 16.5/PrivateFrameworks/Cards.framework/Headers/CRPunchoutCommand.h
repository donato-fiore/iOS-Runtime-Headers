// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRPUNCHOUTCOMMAND_H
#define CRPUNCHOUTCOMMAND_H

@class NSString, SFPunchout, NSDictionary;
@protocol CRPayloadCommand, NSSecureCoding><NSCopying;


#import "CRBasicPayloadCommand.h"

@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand>



@property (nonatomic) NSUInteger commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *payload;
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif