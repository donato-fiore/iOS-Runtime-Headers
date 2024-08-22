// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSETUPCONFIGURATIONRESPONSE_H
#define TRSETUPCONFIGURATIONRESPONSE_H

@class NSSet;


#import "TRResponseMessage.h"

@interface TRSetupConfigurationResponse : TRResponseMessage

@property (nonatomic) BOOL needsNetwork; // ivar: _needsNetwork
@property (copy, nonatomic) NSSet *unauthenticatedAccountServices; // ivar: _unauthenticatedAccountServices
@property (nonatomic) BOOL useAIDA; // ivar: _useAIDA


+(BOOL)supportsSecureCoding;
-(id)_stringFromAccountServices:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif