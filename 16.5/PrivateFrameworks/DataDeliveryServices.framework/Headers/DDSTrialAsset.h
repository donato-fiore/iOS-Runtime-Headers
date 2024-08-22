// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRIALASSET_H
#define DDSTRIALASSET_H

@class NSString;


#import "DDSAsset.h"
#import "DDSTrialExperimentIdentifiers.h"

@interface DDSTrialAsset : DDSAsset {
    NSString *_description;
}


@property (readonly, copy) DDSTrialExperimentIdentifiers *experimentIdentifiers; // ivar: _experimentIdentifiers


+(id)attributesWithLocalURL:(id)arg0 ;
+(id)createWithExperimentIdentifiers:(id)arg0 localURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithExperimentIdentifiers:(id)arg0 attributes:(id)arg1 localURL:(id)arg2 ;


@end


#endif