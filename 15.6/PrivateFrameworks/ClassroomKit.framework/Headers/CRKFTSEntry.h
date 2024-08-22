// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFTSENTRY_H
#define CRKFTSENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKFTSEntry : NSObject

@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) stat stat; // ivar: _stat


-(?)errorForFTSEntry;
-(?)initWithFTSEntryerror;


@end


#endif