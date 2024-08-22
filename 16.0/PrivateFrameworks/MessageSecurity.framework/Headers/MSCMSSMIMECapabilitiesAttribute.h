// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSSMIMECAPABILITIESATTRIBUTE_H
#define MSCMSSMIMECAPABILITIESATTRIBUTE_H

@class NSSet;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>


@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly) NSSet *capabilities; // ivar: _capabilities


-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)init;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;


@end


#endif