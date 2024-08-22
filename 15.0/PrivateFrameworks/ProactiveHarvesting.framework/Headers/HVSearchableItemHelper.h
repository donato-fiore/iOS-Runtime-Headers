// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVSEARCHABLEITEMHELPER_H
#define HVSEARCHABLEITEMHELPER_H


#import <Foundation/Foundation.h>


@interface HVSearchableItemHelper : NSObject



+(BOOL)mailItemIsFromSupportedAccount:(id)arg0 ;
+(BOOL)mailItemIsInDrafts:(id)arg0 ;
+(BOOL)mailItemIsInDrafts:(id)arg0 mailboxIdentifiers:(id)arg1 ;
+(BOOL)mailItemIsInSent:(id)arg0 ;
+(BOOL)mailItemIsInSent:(id)arg0 mailboxIdentifiers:(id)arg1 ;
+(BOOL)mailItemIsInTrash:(id)arg0 ;
+(BOOL)mailItemIsInTrash:(id)arg0 mailboxIdentifiers:(id)arg1 ;
+(BOOL)mailItemIsRecent:(id)arg0 ;
+(BOOL)mailItemIsRecent:(id)arg0 emailHeaders:(id)arg1 ;
+(BOOL)mailItemIsSPAM:(id)arg0 ;
+(BOOL)mailItemIsSPAM:(id)arg0 emailHeaders:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsTooBig:(id)arg0 ;
+(BOOL)mailItemIsValid:(id)arg0 ;
+(BOOL)mailItemIsValid:(id)arg0 emailHeaders:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)searchableItemIsEmpty:(id)arg0 ;
+(BOOL)searchableItemIsOutgoing:(id)arg0 ;
+(id)deserializeAttributes:(id)arg0 ;
+(id)deserializeAttributes:(id)arg0 andBody:(id)arg1 ;
+(id)deserializeAttributesAndBody:(id)arg0 ;
+(id)htmlContentDataNoCopyRetainingBackingBuffer:(id)arg0 ;
+(id)mailItemMessageIdHeaderValues:(id)arg0 ;
+(id)messageIdHeaderValuesFromHeaders:(id)arg0 ;
+(id)sanitizeHandles:(id)arg0 ;
+(id)serializeAttributesAndBody:(id)arg0 ;
+(id)textContentNoCopyRetainingBackingBuffer:(id)arg0 ;


@end


#endif