// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAMESSAGE_H
#define AAMESSAGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AAMessage : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForEncoding;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif