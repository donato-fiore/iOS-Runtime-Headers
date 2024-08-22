// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPPROVENANCEINFO_H
#define HKSPPROVENANCEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKSPProvenanceInfo : NSObject

@property (readonly, nonatomic) NSString *presentation; // ivar: _presentation
@property (readonly, nonatomic) NSString *source; // ivar: _source


+(id)unknownProvenance;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToProvenanceInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSource:(id)arg0 presentation:(id)arg1 ;


@end


#endif