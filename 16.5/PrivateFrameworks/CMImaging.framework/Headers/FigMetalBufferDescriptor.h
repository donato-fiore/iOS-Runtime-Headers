// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGMETALBUFFERDESCRIPTOR_H
#define FIGMETALBUFFERDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FigMetalBufferDescriptor : NSObject

@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger options; // ivar: _options


-(id)init;
-(void)initFromDescriptor:(id)arg0 ;


@end


#endif