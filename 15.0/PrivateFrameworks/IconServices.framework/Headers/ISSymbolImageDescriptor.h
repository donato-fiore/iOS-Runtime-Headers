// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSYMBOLIMAGEDESCRIPTOR_H
#define ISSYMBOLIMAGEDESCRIPTOR_H

@class IFSymbolImageDescriptor, NSString;
@protocol ISImageDescriptor;



@interface ISSymbolImageDescriptor : IFSymbolImageDescriptor <ISImageDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic) NSInteger weight; // ivar: _weight




@end


#endif