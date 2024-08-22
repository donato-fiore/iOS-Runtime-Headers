// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSLINKITEMIDENTIFIER_H
#define BCSLINKITEMIDENTIFIER_H

@class NSURL, NSString;
@protocol BCSItemIdentifying;

#import <Foundation/Foundation.h>


@interface BCSLinkItemIdentifier : NSObject <BCSItemIdentifying>

 {
    NSURL *_url;
    NSString *_fullHash;
    NSInteger _computedTruncatedHash;
    NSInteger _truncatedDomainHash;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger truncatedHash;
@property (readonly, nonatomic) NSInteger type;


-(BOOL)matchesItemIdentifying:(id)arg0 ;


@end


#endif