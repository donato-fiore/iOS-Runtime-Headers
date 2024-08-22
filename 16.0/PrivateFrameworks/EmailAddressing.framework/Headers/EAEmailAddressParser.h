// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EAEMAILADDRESSPARSER_H
#define EAEMAILADDRESSPARSER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EAEmailAddressParser : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)addressIsEmptyGroup:(id)arg0 ;
+(BOOL)isLegalEmailAddress:(id)arg0 ;
+(id)_stringByDecodingIDNAString:(id)arg0 inRange:(struct _NSRange )arg1 ;
+(id)_stringByEncodingIDNAString:(id)arg0 inRange:(struct _NSRange )arg1 ;
+(id)addressDomainFromAddress:(id)arg0 ;
+(id)displayNameFromAddress:(id)arg0 ;
+(id)displayNameFromAddress:(id)arg0 cacheResults:(BOOL)arg1 ;
+(id)idnaDecodedAddressForAddress:(id)arg0 ;
+(id)idnaEncodedAddressForAddress:(id)arg0 ;
+(id)localPartFromAddress:(id)arg0 ;
+(id)log;
+(id)rawAddressFromFullAddress:(id)arg0 ;
+(id)rawAddressFromFullAddress:(id)arg0 cacheResults:(BOOL)arg1 ;
+(id)rawAddressRespectingGroupsFromFullAddress:(id)arg0 ;
+(struct _NSRange )rangeOfAddressDomainFromAddress:(id)arg0 ;
+(void)_componentsForFullAddress:(id)arg0 rawAddressIndexes:(*id)arg1 localPartIndexes:(*id)arg2 domainIndexes:(*id)arg3 ;
+(void)insertPreviousRoute:(*unsigned short)arg0 ofLength:(NSUInteger)arg1 toBuffer:(**unsigned short)arg2 ofLength:(NSUInteger)arg3 atPosition:(*unsigned short)arg4 addSpace:(BOOL)arg5 ;


@end


#endif