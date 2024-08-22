// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSANDBOXEXTENSION_H
#define PKSANDBOXEXTENSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKSandboxExtension : NSObject

@property NSInteger handle; // ivar: _handle
@property (readonly, nonatomic) NSString *token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(void)consume;
-(void)dealloc;
-(void)expel;


@end


#endif