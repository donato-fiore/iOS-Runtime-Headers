// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETERECENTCONTACTSTRANSFORM_H
#define CNAUTOCOMPLETERECENTCONTACTSTRANSFORM_H

@class CRRecentContactsLibrary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CNAutocompleteRecentContactsTransform : NSObject

@property (retain) CRRecentContactsLibrary *library; // ivar: _library
@property (copy) NSArray *otherAddressesAlreadyChosen; // ivar: _otherAddressesAlreadyChosen
@property (copy) NSString *priorityDomainForSorting; // ivar: _priorityDomainForSorting
@property (copy) NSString *searchString; // ivar: _searchString
@property (copy) NSString *sendingAddress; // ivar: _sendingAddress


+(NSInteger)addressTypeForRecentContact:(id)arg0 ;
+(id)autocompleteResultForRecent:(id)arg0 factory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 library:(id)arg5 ;
+(id)contactAutocompleteResultForRecent:(id)arg0 factory:(id)arg1 completesChosenGroup:(BOOL)arg2 ;
+(id)groupAutocompleteResultForRecent:(id)arg0 factory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 ;
+(id)resultTransformWithFactory:(SEL)arg0 membersFactory:(id)arg1 chosenAddressHashes:(id)arg2 searchString:(id)arg3 library:(id)arg4 ;
+(id)transformForRequest:(SEL)arg0 library:(id)arg1 ;


@end


#endif