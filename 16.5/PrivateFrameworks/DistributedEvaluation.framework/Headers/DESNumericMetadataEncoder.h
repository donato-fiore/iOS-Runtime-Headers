// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESNUMERICMETADATAENCODER_H
#define DESNUMERICMETADATAENCODER_H

@protocol DESMetadataEncoder;

#import <Foundation/Foundation.h>


@interface DESNumericMetadataEncoder : NSObject <DESMetadataEncoder>





-(id)encodeNumber:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)encodeNumberVector:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)encodeString:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)encodeStringVector:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)zeroWithLength:(NSUInteger)arg0 ;


@end


#endif