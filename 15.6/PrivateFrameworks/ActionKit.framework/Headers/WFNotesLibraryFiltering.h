// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNOTESLIBRARYFILTERING_H
#define WFNOTESLIBRARYFILTERING_H

@class WFContentLibraryANDFiltering;



@interface WFNotesLibraryFiltering : WFContentLibraryANDFiltering



+(Class)objectClass;
+(void)getGroupNamesForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)performCustomFilteringUsingComparisonPredicates:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif