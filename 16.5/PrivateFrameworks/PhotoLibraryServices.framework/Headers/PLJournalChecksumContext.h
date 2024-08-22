// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLJOURNALCHECKSUMCONTEXT_H
#define PLJOURNALCHECKSUMCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLJournalChecksumContext : NSObject {
    CC_SHA256state_st _context;
    NSString *_finalizedChecksum;
}




-(id)finalizedChecksum;
-(id)init;
-(void)update:(id)arg0 ;


@end


#endif