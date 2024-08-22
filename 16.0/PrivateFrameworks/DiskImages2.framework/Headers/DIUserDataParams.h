// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIUSERDATAPARAMS_H
#define DIUSERDATAPARAMS_H

@class NSDictionary;


#import "DIBaseParams.h"

@interface DIUserDataParams : DIBaseParams

@property (retain, nonatomic) NSDictionary *userDict; // ivar: _userDict


+(BOOL)supportsSecureCoding;
-(BOOL)embedWithError:(*id)arg0 ;
-(BOOL)retrieveWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif