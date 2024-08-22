// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSAPPLEHASHAGILITYV2ATTRIBUTE_H
#define MSCMSAPPLEHASHAGILITYV2ATTRIBUTE_H

@class NSDictionary;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSAppleHashAgilityV2Attribute : NSObject <MSCMSAttributeCoder>



@property (readonly, retain) NSDictionary *hashAgilityValues; // ivar: _hashAgilityValues


-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithHashAgilityValues:(id)arg0 ;


@end


#endif