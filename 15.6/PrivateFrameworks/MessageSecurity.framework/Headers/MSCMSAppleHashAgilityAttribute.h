// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSCMSAPPLEHASHAGILITYATTRIBUTE_H
#define MSCMSAPPLEHASHAGILITYATTRIBUTE_H

@class NSData;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly, retain) NSData *hashAgilityValue; // ivar: _hashAgilityValue


-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithHashAgilityValue:(id)arg0 ;


@end


#endif