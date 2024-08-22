// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLLIBRARYSCOPECHANGE_H
#define CPLLIBRARYSCOPECHANGE_H

@class NSString, NSData;


#import "CPLScopeChange.h"

@interface CPLLibraryScopeChange : CPLScopeChange

@property (copy, nonatomic) NSString *problematicFormerSharedScopeIdentifier; // ivar: _problematicFormerSharedScopeIdentifier
@property (copy, nonatomic) NSData *rewindAnchorsPerSharingScopesData; // ivar: _rewindAnchorsPerSharingScopesData


-(BOOL)hasProblematicFormerSharedScope;
-(id)rewindAnchorsPerSharingScopes;
-(void)setRewindAnchorsPerSharingScopes:(id)arg0 ;


@end


#endif