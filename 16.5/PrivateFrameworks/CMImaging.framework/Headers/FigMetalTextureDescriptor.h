// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGMETALTEXTUREDESCRIPTOR_H
#define FIGMETALTEXTUREDESCRIPTOR_H

@class MTLTextureDescriptor, NSString;

#import <Foundation/Foundation.h>


@interface FigMetalTextureDescriptor : NSObject

@property (retain, nonatomic) MTLTextureDescriptor *desc; // ivar: _desc
@property (nonatomic) BOOL isLinear; // ivar: _isLinear
@property (retain, nonatomic) NSString *label; // ivar: _label


-(id)init;
-(void)initFromDescriptor:(id)arg0 ;


@end


#endif