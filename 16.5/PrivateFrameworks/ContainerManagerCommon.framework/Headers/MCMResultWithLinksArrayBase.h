// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHLINKSARRAYBASE_H
#define MCMRESULTWITHLINKSARRAYBASE_H

@class NSString, NSArray;
@protocol MCMResultWithLinksArray;


#import "MCMResultBase.h"
#import "MCMError.h"

@interface MCMResultWithLinksArrayBase : MCMResultBase <MCMResultWithLinksArray>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *resolvedLinks; // ivar: _resolvedLinks
@property (readonly) Class superclass;


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithResolvedLinks:(id)arg0 ;
-(void)encodeLink:(id)arg0 ontoXPCObject:(id)arg1 ;


@end


#endif