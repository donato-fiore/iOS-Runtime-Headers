// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NAUITEXTSTYLEDESCRIPTOR_H
#define NAUITEXTSTYLEDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NAUITextStyleDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL allowsAccessibilitySizes; // ivar: _allowsAccessibilitySizes
@property (readonly, nonatomic) BOOL allowsSmallSizes; // ivar: _allowsSmallSizes
@property (readonly, nonatomic) unsigned int symbolicTraits; // ivar: _symbolicTraits
@property (readonly, copy, nonatomic) NSString *textStyle; // ivar: _textStyle


+(id)defaultFontForTextStyleDescriptor:(id)arg0 ;
+(id)descriptorWithTextStyle:(id)arg0 ;
+(id)fontWithTextStyleDescriptor:(id)arg0 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptorByAddingSymbolicTraits:(unsigned int)arg0 removingSymbolicTraits:(unsigned int)arg1 ;
-(id)descriptorByDisallowingAccessibilitySizes;
-(id)descriptorByDisallowingSmallSizes;
-(id)init;
-(id)initWithTextStyle:(id)arg0 symbolicTraits:(unsigned int)arg1 allowsAccessibilitySizes:(BOOL)arg2 allowsSmallSizes:(BOOL)arg3 ;


@end


#endif