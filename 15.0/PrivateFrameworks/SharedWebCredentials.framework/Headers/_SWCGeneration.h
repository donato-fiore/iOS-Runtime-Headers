// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SWCGENERATION_H
#define _SWCGENERATION_H

@protocol SWCRedactedDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>

 {
    int _processIdentifier;
    int _processIdentifierVersion;
    NSUInteger _tick;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)generationByIncrementingSelf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPID:(int)arg0 version:(int)arg1 tick:(NSUInteger)arg2 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif