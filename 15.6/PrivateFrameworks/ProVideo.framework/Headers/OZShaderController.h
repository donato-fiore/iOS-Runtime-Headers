// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OZSHADERCONTROLLER_H
#define OZSHADERCONTROLLER_H

@class NSString, NSRegularExpression, NSMutableArray, NSURL;
@protocol MTLDevice, MTLLibrary;

#import <Foundation/Foundation.h>


@interface OZShaderController : NSObject

@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSString *fragmentFunctionName; // ivar: _fragmentFunctionName
@property (retain, nonatomic) NSRegularExpression *functionRegex; // ivar: _functionRegex
@property (readonly, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library
@property (retain, nonatomic) NSRegularExpression *paramRegex; // ivar: _paramRegex
@property (readonly, nonatomic) NSMutableArray *parameters; // ivar: _parameters
@property (retain, nonatomic) NSString *shader; // ivar: _shader
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSString *vertexFunctionName; // ivar: _vertexFunctionName


-(id)functionNameFromLine:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)preprocess:(id)arg0 ;
-(id)process:(id)arg0 ;
-(void)dealloc;
-(void)initRegex;
-(void)loadShaderWithURL:(id)arg0 ;


@end


#endif