// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIE5RTSURFACEPORTDESCRIPTOR_H
#define SIE5RTSURFACEPORTDESCRIPTOR_H

@class NSString;
@protocol SIE5RTPortDescriptor;

#import <Foundation/Foundation.h>


@interface SIE5RTSurfacePortDescriptor : NSObject <SIE5RTPortDescriptor>

 {
    *e5rt_io_port _port;
    *e5rt_surface_desc _desc;
    int _format;
    NSUInteger _width;
    NSUInteger _height;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*NSUInteger)getShape;
-(*void)getDataPtr;
-(NSUInteger)getBatchnum;
-(NSUInteger)getChannels;
-(NSUInteger)getHeight;
-(NSUInteger)getNumberOfElements;
-(NSUInteger)getRank;
-(NSUInteger)getRowElements;
-(NSUInteger)getWidth;
-(id)initWithE5RTPort:(struct e5rt_io_port *)arg0 portType:(NSInteger)arg1 ;
-(void)bindInputPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)bindInputRawPointer:(*void)arg0 ;
-(void)dealloc;


@end


#endif