// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLDEBUGCOMMANDENCODER_H
#define _MTLDEBUGCOMMANDENCODER_H

@class MTLCommandEncoder, NSString;
@protocol MTLDebugCommandEncoder, MTLDevice;



@interface _MTLDebugCommandEncoder : MTLCommandEncoder <MTLDebugCommandEncoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(void)IOLog:(id)arg0 ;
-(void)IOLogBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)kprintf:(id)arg0 ;
-(void)kprintfBytes:(char *)arg0 length:(NSUInteger)arg1 ;


@end


#endif