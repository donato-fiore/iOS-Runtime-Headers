// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESCATEGORICALMETADATAENCODER_H
#define DESCATEGORICALMETADATAENCODER_H

@class NSDictionary;
@protocol DESMetadataEncoder;

#import <Foundation/Foundation.h>


@interface DESCategoricalMetadataEncoder : NSObject <DESMetadataEncoder>

 {
    NSDictionary *_schemaDict;
}


@property (readonly, nonatomic) BOOL useRange; // ivar: _useRange


-(NSUInteger)findBucketIndexOfNumber:(id)arg0 inItems:(id)arg1 ;
-(NSUInteger)findBucketIndexOfString:(id)arg0 inItems:(id)arg1 ;
-(id)encodeNumber:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)encodeNumberVector:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)encodeString:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)encodeStringVector:(id)arg0 toLength:(NSUInteger)arg1 ;
-(id)initWithSingleSchema:(id)arg0 ;
-(id)zeroWithLength:(NSUInteger)arg0 ;


@end


#endif