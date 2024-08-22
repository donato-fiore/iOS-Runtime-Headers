// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSERVICEGRAPHCOMMAND_H
#define CDMSERVICEGRAPHCOMMAND_H

@protocol NSSecureCoding;


#import "CDMBaseCommand.h"

@interface CDMServiceGraphCommand : CDMBaseCommand <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif