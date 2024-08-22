// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYSEARCHREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYSEARCHREQUEST_H

@class MPModelRequest, NSArray, NSString;



@interface MusicKit_SoftLinking_MPModelLibrarySearchRequest : MPModelRequest

@property (nonatomic) NSInteger limit; // ivar: _limit
@property (copy, nonatomic) NSArray *scopes; // ivar: _scopes
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm


-(id)initWithSearchTerm:(id)arg0 scopes:(id)arg1 limit:(NSInteger)arg2 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif