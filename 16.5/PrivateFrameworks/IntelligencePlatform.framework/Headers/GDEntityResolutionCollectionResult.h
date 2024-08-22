// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDENTITYRESOLUTIONCOLLECTIONRESULT_H
#define GDENTITYRESOLUTIONCOLLECTIONRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDEntityResolutionCollectionResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *candidates; // ivar: _candidates


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCandidates:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif