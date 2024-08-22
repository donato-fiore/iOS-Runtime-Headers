// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMERGECANDIDATEPAIR_H
#define VCPMERGECANDIDATEPAIR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VCPMergeCandidatePair : NSObject {
    NSUInteger _hash;
}


@property (readonly) NSString *person1LocalIdentifier; // ivar: _person1LocalIdentifier
@property (readonly) NSString *person2LocalIdentifier; // ivar: _person2LocalIdentifier
@property (readonly) NSString *reason; // ivar: _reason


+(id)mergeCandidatePairWithPerson:(id)arg0 andPerson:(id)arg1 reason:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPerson:(id)arg0 andPerson:(id)arg1 reason:(id)arg2 ;


@end


#endif