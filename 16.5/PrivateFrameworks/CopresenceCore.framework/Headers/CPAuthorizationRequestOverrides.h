// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPAUTHORIZATIONREQUESTOVERRIDES_H
#define CPAUTHORIZATIONREQUESTOVERRIDES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPAuthorizationRequestOverrides : NSObject <NSSecureCoding>

 {
    ? title;
    ? message;
    ? startForEveryone;
    ? startForMe;
    ? alwaysPrompt;
    ? confirmReplacement;
}


@property (nonatomic, readonly) NSInteger hash;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif