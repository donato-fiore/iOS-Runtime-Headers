// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRTAGGER_H
#define PRTAGGER_H

@class NLTagger;



@interface PRTagger : NLTagger

@property (readonly) NSUInteger orthoIndex; // ivar: _orthoIndex


-(id)initWithTagSchemes:(id)arg0 orthoIndex:(NSUInteger)arg1 ;


@end


#endif