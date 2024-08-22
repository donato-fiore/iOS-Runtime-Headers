// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIE5RTPORT_H
#define SIE5RTPORT_H

@class NSString;
@protocol SIE5RTPortDescriptor;

#import <Foundation/Foundation.h>


@interface SIE5RTPort : NSObject {
    id<SIE5RTPortDescriptor> *_desc;
    NSString *_name;
    NSInteger _portType;
}


@property (readonly) *e5rt_io_port port; // ivar: _port


-(*NSUInteger)getShape;
-(*void)getDataPtr;
-(NSUInteger)getBatchnum;
-(NSUInteger)getChannels;
-(NSUInteger)getHeight;
-(NSUInteger)getNumberOfElements;
-(NSUInteger)getRowElements;
-(NSUInteger)getWidth;
-(id)initPortWithE5RTStreamOperation:(struct e5rt_execution_stream_operation *)arg0 blobName:(id)arg1 portType:(NSInteger)arg2 ;
-(void)bindInputPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)bindInputRawPointer:(*void)arg0 ;
-(void)bindOutputSurface:(struct __IOSurface *)arg0 ;


@end


#endif