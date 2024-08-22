// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVARC4RANDOMSOURCE_H
#define MSVARC4RANDOMSOURCE_H

@class NSData;
@protocol MSVRandomSource, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MSVARC4RandomSource : NSObject <MSVRandomSource, NSSecureCoding, NSCopying>

 {
    *MSVArc4State _state;
}


@property (copy, nonatomic) NSData *seed; // ivar: _seed


+(BOOL)supportsSecureCoding;
+(id)sharedSource;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(id)bytesWithLength:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(id)arg0 ;
-(id)mutableBytesWithLength:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif