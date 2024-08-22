// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRASSET_H
#define BRASSET_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BRAsset : NSObject

@property (nonatomic) BOOL hasAudio; // ivar: _hasAudio
@property (nonatomic) BOOL hasHaptic; // ivar: _hasHaptic
@property (readonly, nonatomic) BOOL isNull; // ivar: _isNull
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) id *propertyList;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)nullAsset;
+(id)withType:(NSInteger)arg0 andParameters:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(NSInteger)arg0 andParameters:(id)arg1 null:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif