// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKTOKENAUTHOPERATION_H
#define TKTOKENAUTHOPERATION_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TKTokenAuthOperation : NSObject <NSSecureCoding>



@property (copy) NSError *authenticationError; // ivar: _authenticationError


+(BOOL)supportsSecureCoding;
-(BOOL)finishWithError:(*id)arg0 ;
-(Class)baseClassForUI;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)importOperation:(id)arg0 ;


@end


#endif