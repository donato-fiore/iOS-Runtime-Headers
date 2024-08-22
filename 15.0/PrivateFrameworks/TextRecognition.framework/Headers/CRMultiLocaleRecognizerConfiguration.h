// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRMULTILOCALERECOGNIZERCONFIGURATION_H
#define CRMULTILOCALERECOGNIZERCONFIGURATION_H

@class NSOrderedSet;


#import "CRRecognizerConfiguration.h"

@interface CRMultiLocaleRecognizerConfiguration : CRRecognizerConfiguration

@property (readonly) NSOrderedSet *languages; // ivar: _languages


-(id)initV1DefaultConfigWithOptions:(id)arg0 ;
-(id)initV2DefaultConfigWithOptions:(id)arg0 ;
-(id)initV3DefaultConfigWithOptions:(id)arg0 ;
-(id)initWithImageReaderOptions:(id)arg0 error:(*id)arg1 ;
-(id)textFeatureFilter;


@end


#endif