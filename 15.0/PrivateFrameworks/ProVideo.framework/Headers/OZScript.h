// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZSCRIPT_H
#define OZSCRIPT_H

@class JSContext, NSRegularExpression, NSMutableArray, NSURL;

#import <Foundation/Foundation.h>


@interface OZScript : NSObject

@property (nonatomic) BOOL alertShown; // ivar: _alertShown
@property (readonly, nonatomic) JSContext *context; // ivar: _context
@property (retain, nonatomic) NSRegularExpression *paramRegex; // ivar: _paramRegex
@property (readonly, nonatomic) NSMutableArray *parameterDescriptors; // ivar: _parameterDescriptors
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)init;
-(id)objectWithName:(id)arg0 ;
-(id)preprocess:(id)arg0 ;
-(id)process:(id)arg0 ;
-(void)dealloc;
-(void)dispatch:(id)arg0 ;
-(void)exportObject:(id)arg0 as:(id)arg1 ;
-(void)loadScriptWithURL:(id)arg0 ;


@end


#endif