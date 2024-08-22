// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSBUSINESSITEMIDENTIFIER_H
#define BCSBUSINESSITEMIDENTIFIER_H

@class NSString;
@protocol BCSItemIdentifying;

#import <Foundation/Foundation.h>


@interface BCSBusinessItemIdentifier : NSObject <BCSItemIdentifying>

 {
    NSInteger _computedTruncatedHash;
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