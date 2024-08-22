// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSAPPLICATIONIDENTITYENUMERATOR_H
#define LSAPPLICATIONIDENTITYENUMERATOR_H

@class NSError, NSEnumerator;


#import "LSEnumerator.h"
#import "_LSApplicationRecordEnumerator.h"
#import "LSApplicationRecord.h"

@interface LSApplicationIdentityEnumerator : LSEnumerator {
    NSError *_ctxError;
    _LSApplicationRecordEnumerator *_recordEnumerator;
    LSApplicationRecord *_currentRecord;
    NSEnumerator *_currentRecordIdentitiesEnumerator;
}




-(id)initWithAppEnumerationOptions:(NSUInteger)arg0 ;
-(id)nextObject;


@end


#endif