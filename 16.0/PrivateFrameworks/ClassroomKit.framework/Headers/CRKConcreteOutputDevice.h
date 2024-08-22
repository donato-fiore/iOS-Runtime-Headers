// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETEOUTPUTDEVICE_H
#define CRKCONCRETEOUTPUTDEVICE_H

@class NSString, AVOutputContext, AVOutputDevice;
@protocol CRKOutputDevice;

#import <Foundation/Foundation.h>


@interface CRKConcreteOutputDevice : NSObject <CRKOutputDevice>



@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext
@property (readonly, nonatomic) AVOutputDevice *outputDevice; // ivar: _outputDevice


+(id)outputOptionsWithPassword:(id)arg0 suppressPrompt:(BOOL)arg1 ;
-(id)initWithOutputDevice:(id)arg0 outputContext:(id)arg1 ;
-(void)displayToDeviceWithPassword:(id)arg0 suppressPrompt:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif