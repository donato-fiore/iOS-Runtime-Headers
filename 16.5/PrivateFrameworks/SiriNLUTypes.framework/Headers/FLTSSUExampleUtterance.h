// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLTSSUEXAMPLEUTTERANCE_H
#define FLTSSUEXAMPLEUTTERANCE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FLTSSUExampleUtterance : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SSUExampleUtterance _root;
}


@property (readonly, nonatomic) NSString *string;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUExampleUtterance *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SSUExampleUtterance *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<SSUExampleUtterance> )addObjectToBuffer:(*void)arg0 ;


@end


#endif