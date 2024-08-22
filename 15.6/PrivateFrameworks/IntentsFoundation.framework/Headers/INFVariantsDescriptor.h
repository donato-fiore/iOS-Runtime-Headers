// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFVARIANTSDESCRIPTOR_H
#define INFVARIANTSDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface INFVariantsDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *dictionaryKey;
@property (nonatomic) NSUInteger gender; // ivar: _gender
@property (nonatomic) NSUInteger plurality; // ivar: _plurality


+(id)variant;
+(id)variantWithVariants:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)append:(id)arg0 toString:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithVariants:(NSUInteger)arg0 ;
-(id)variantByRemovingOneAttribute;


@end


#endif