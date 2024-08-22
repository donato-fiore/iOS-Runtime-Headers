// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCSUBMITNEWSLETTERPERSONALIZATIONVECTORCOMMAND_H
#define FCSUBMITNEWSLETTERPERSONALIZATIONVECTORCOMMAND_H

@class NSString;


#import "FCCommand.h"

@interface FCSubmitNewsletterPersonalizationVectorCommand : FCCommand

@property (retain, nonatomic) NSString *personalizationVector; // ivar: _personalizationVector


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonalizationVector:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif