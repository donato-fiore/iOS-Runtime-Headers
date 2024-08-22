// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCONFIRMATIONRESPONSE_H
#define LNCONFIRMATIONRESPONSE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNConfirmationResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isConfirmed) BOOL confirmed; // ivar: _confirmed
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 confirmed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif