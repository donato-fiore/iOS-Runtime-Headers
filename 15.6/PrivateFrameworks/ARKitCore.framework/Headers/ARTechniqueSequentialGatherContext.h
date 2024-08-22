// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARTECHNIQUESEQUENTIALGATHERCONTEXT_H
#define ARTECHNIQUESEQUENTIALGATHERCONTEXT_H

@class NSMutableArray;
@protocol ARDaemonSecureCoding;


#import "ARTechniqueGatherContext.h"

@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext <ARDaemonSecureCoding>

 {
    NSMutableArray *_gatheredData;
}




+(BOOL)supportsSecureCoding;
-(id)gatheredData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentContext:(id)arg0 ;
-(void)addResultData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeResultsOfContext:(id)arg0 resultFilterBlock:(id)arg1 ;


@end


#endif