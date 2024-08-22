// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESDEDISCOKEY_H
#define DESDEDISCOKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DESDediscoKey : NSObject

@property (readonly, copy, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSString *privacyID; // ivar: _privacyID
@property (readonly, copy, nonatomic) NSString *recipeID; // ivar: _recipeID


-(id)initWithPrivacyID:(id)arg0 environment:(id)arg1 recipeID:(id)arg2 ;
-(id)metadataEncodedMetricsKeyString;
-(id)metadataKeyString;
-(id)metricsKeyString;
-(id)resultsKeyString;
-(id)resultsKeyStringForChunk:(id)arg0 ;


@end


#endif