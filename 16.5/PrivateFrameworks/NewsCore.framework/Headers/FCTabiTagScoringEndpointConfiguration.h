// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTABITAGSCORINGENDPOINTCONFIGURATION_H
#define FCTABITAGSCORINGENDPOINTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCTabiTagScoringEndpointConfiguration : NSObject

@property (retain, nonatomic) NSString *inputTopicIDsKey; // ivar: _inputTopicIDsKey
@property (retain, nonatomic) NSString *outputKey; // ivar: _outputKey


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif