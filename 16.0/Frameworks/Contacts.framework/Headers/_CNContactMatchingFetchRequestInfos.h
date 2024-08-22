// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNCONTACTMATCHINGFETCHREQUESTINFOS_H
#define _CNCONTACTMATCHINGFETCHREQUESTINFOS_H

@class NSPredicate, NSArray;

#import <Foundation/Foundation.h>


@interface _CNContactMatchingFetchRequestInfos : NSObject

@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSArray *properties; // ivar: _properties


+(id)fetchRequestInfoForPredicate:(id)arg0 properties:(id)arg1 ;


@end


#endif