// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSURLSESSIONTOKEN_H
#define CHSURLSESSIONTOKEN_H

@class NSString;
@protocol NSSecureCoding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CHSURLSessionToken : NSObject <NSSecureCoding, BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif