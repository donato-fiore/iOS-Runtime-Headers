// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INJSONENCODER_H
#define INJSONENCODER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "INJSONEncoderConfiguration.h"

@interface INJSONEncoder : NSObject <NSCopying>



@property (readonly, nonatomic) INJSONEncoderConfiguration *_storedConfiguration;
@property (readonly, copy, nonatomic) INJSONEncoderConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) NSString *languageCode;


-(id)_encodeObject:(id)arg0 codableAttribute:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeObject:(id)arg0 ;
-(id)encodeObject:(id)arg0 withCodableAttribute:(id)arg1 ;
-(id)encodeObject:(id)arg0 withCodableDescription:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif