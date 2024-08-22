// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYSEARCHRESPONSE_H
#define MPMODELLIBRARYSEARCHRESPONSE_H



#import "MPModelLibraryResponse.h"

@interface MPModelLibrarySearchResponse : MPModelLibraryResponse



-(BOOL)hasMoreResultsForSectionAtIndex:(NSInteger)arg0 ;
-(NSInteger)searchWeightForIndexPath:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif