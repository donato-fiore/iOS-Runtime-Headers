// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSKITEMPTYACCESS_H
#define CKVSKITEMPTYACCESS_H

@class NSString;
@protocol CKVSkitReadAccess;

#import <Foundation/Foundation.h>


@interface CKVSkitEmptyAccess : NSObject <CKVSkitReadAccess>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)indexLocale;
-(id)matchSpansOfTokenChain:(id)arg0 error:(*id)arg1 ;
-(id)searchHitsForQuery:(id)arg0 locale:(id)arg1 error:(*id)arg2 ;


@end


#endif