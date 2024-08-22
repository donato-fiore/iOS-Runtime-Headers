// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECBIMIDATA_H
#define ECBIMIDATA_H

@class NSURL, NSString, NSData;

#import <Foundation/Foundation.h>


@interface ECBIMIData : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSURL *evidenceLocation; // ivar: _evidenceLocation
@property (readonly, nonatomic) NSString *hashAlgorithm; // ivar: _hashAlgorithm
@property (readonly, copy, nonatomic) NSData *indicator; // ivar: _indicator
@property (readonly, nonatomic) NSString *indicatorHash; // ivar: _indicatorHash
@property (readonly, nonatomic) NSURL *location; // ivar: _location


+(id)bimiDataForHeaders:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIndicator:(id)arg0 location:(id)arg1 evidenceLocation:(id)arg2 indicatorHash:(id)arg3 hashAlgorithm:(id)arg4 ;


@end


#endif