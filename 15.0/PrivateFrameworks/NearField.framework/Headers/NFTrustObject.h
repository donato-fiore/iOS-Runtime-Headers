// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFTRUSTOBJECT_H
#define NFTRUSTOBJECT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFTrustObject : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)allowedXPCClasses;
-(id)allowedXPCClasses;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif