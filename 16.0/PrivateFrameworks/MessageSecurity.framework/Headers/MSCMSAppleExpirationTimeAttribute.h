// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSAPPLEEXPIRATIONTIMEATTRIBUTE_H
#define MSCMSAPPLEEXPIRATIONTIMEATTRIBUTE_H

@class NSDate;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSAppleExpirationTimeAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly, retain) NSDate *expirationTime; // ivar: _expirationTime


-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithExpirationTime:(id)arg0 ;


@end


#endif