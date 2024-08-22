// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSS_PUNCTUATIONCONTEXT_H
#define AXSS_PUNCTUATIONCONTEXT_H

@class NSManagedObject, NSString;


#import "AXSS_PunctuationGroup.h"

@interface AXSS_PunctuationContext : NSManagedObject

@property (copy, nonatomic) NSString *contextIdentifier;
@property (retain, nonatomic) AXSS_PunctuationGroup *group;


+(id)fetchRequest;


@end


#endif