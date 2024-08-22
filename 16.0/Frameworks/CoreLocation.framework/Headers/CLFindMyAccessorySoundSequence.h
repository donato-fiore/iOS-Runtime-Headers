// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLFINDMYACCESSORYSOUNDSEQUENCE_H
#define CLFINDMYACCESSORYSOUNDSEQUENCE_H

@class NSMutableData, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessorySoundSequence : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableData *_encodedSequence;
}


@property (readonly) NSData *encodedSequence;
@property (readonly) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)defaultSequence;
+(id)rangingSequence;
+(id)shortSequence;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 encodedSequence:(id)arg1 ;
-(void)addSoundBlockWithAsset:(NSUInteger)arg0 loopCount:(unsigned char)arg1 duration:(unsigned short)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif