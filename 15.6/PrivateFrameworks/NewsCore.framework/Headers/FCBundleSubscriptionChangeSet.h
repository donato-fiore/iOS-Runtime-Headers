// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCBUNDLESUBSCRIPTIONCHANGESET_H
#define FCBUNDLESUBSCRIPTIONCHANGESET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCBundleSubscriptionChangeSet : NSObject

@property (copy, nonatomic) NSArray *tagIDsAdded; // ivar: _tagIDsAdded
@property (copy, nonatomic) NSArray *tagIDsRemoved; // ivar: _tagIDsRemoved


-(id)initWithTagIDsAdded:(id)arg0 tagIDsRemoved:(id)arg1 ;


@end


#endif