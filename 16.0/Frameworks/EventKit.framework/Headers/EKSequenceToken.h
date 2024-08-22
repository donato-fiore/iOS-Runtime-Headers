// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSEQUENCETOKEN_H
#define EKSEQUENCETOKEN_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_sequenceNumbers;
}




+(BOOL)supportsSecureCoding;
-(id)CADToken;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCADSequenceToken:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)legacyToken;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif