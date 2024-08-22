// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCREIMPORTERUTIL_H
#define BRCREIMPORTERUTIL_H


#import <Foundation/Foundation.h>


@interface BRCReimporterUtil : NSObject



+(void)ingestFromCacheItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)reimportItemsBelowItemWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif