// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ACCOUNTCACHEENTRY_H
#define ML3ACCOUNTCACHEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ML3AccountCacheEntry : NSObject

@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *appleID; // ivar: _appleID


-(id)initWithAppleID:(id)arg0 altDSID:(id)arg1 ;


@end


#endif