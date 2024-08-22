// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTNAMEORDERIMPL_H
#define CNCONTACTNAMEORDERIMPL_H


#import <Foundation/Foundation.h>


@interface CNContactNameOrderImpl : NSObject



+(id)defaultNewContactOrder;
+(id)defaultOrder;
+(id)defaultSortOrder;
+(id)familyNameFirstOrder;
+(id)givenNameFirstOrder;
+(id)orderForSortOrder:(NSInteger)arg0 ;
-(NSInteger)nameOrder;
-(id)nameProperties;
-(id)phoneticNameProperties;
-(id)sortingNameProperties;


@end


#endif