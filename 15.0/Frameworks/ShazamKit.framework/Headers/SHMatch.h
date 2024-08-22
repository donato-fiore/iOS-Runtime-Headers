// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHMATCH_H
#define SHMATCH_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SHSignature.h"

@interface SHMatch : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) SHSignature *querySignature; // ivar: _querySignature


+(BOOL)supportsSecureCoding;
-(BOOL)containsMediaItemWithFuzzyTolerance:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaItems:(id)arg0 forSignature:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif