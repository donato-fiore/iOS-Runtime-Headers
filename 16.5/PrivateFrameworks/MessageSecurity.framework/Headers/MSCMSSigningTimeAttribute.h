// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSSIGNINGTIMEATTRIBUTE_H
#define MSCMSSIGNINGTIMEATTRIBUTE_H

@class NSDate;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly, retain) MSOID *attributeType;
@property (readonly, retain) NSDate *signingTime; // ivar: _signingTime


-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithSigningTime:(id)arg0 ;


@end


#endif