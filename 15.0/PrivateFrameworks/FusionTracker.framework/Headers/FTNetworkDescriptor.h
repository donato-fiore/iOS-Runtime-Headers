// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTNETWORKDESCRIPTOR_H
#define FTNETWORKDESCRIPTOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FTNetworkDescriptor : NSObject

@property (retain, nonatomic) NSArray *inputImages; // ivar: _inputImages
@property (retain, nonatomic) NSArray *inputReferences; // ivar: _inputReferences
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *outputNames; // ivar: _outputNames


-(id)init;
-(id)onlyImageInput;


@end


#endif