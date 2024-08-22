// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FXPLUGAPIHANDLER_H
#define FXPLUGAPIHANDLER_H

@class NSString;
@protocol FxHostResourcesAPI, PROAPIObject, FxPlugAPIDelegate;

#import <Foundation/Foundation.h>


@interface FxPlugAPIHandler : NSObject <FxHostResourcesAPI, PROAPIObject>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<FxPlugAPIDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)allocateMemory:(NSUInteger)arg0 clear:(BOOL)arg1 clearWith:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(NSUInteger)numberOfCores;
-(id)errorWithString:(id)arg0 andCode:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)createPBuffer:(*unsigned int)arg0 withTarget:(unsigned int)arg1 error:(*id)arg2 ;
-(void)createTexture:(*id)arg0 withDOD:(struct FxRect )arg1 GLTarget:(unsigned int)arg2 level:(int)arg3 internalFormat:(unsigned int)arg4 width:(int)arg5 height:(int)arg6 border:(int)arg7 format:(unsigned int)arg8 type:(unsigned int)arg9 pixels:(*void)arg10 origin:(NSUInteger)arg11 pixelAspectRatio:(CGFloat)arg12 andError:(*id)arg13 ;
-(void)deletePBuffer:(unsigned int)arg0 error:(*id)arg1 ;
-(void)deleteTexture:(id)arg0 error:(*id)arg1 ;
-(void)freeMemory:(*void)arg0 error:(*id)arg1 ;
-(void)performSelector:(SEL)arg0 onTarget:(id)arg1 withObject:(id)arg2 onThreads:(NSInteger)arg3 waitUntilDone:(BOOL)arg4 error:(*id)arg5 ;
-(void)runFxPlugThread:(id)arg0 ;
-(void)trackExternalAllocation:(NSUInteger)arg0 ;


@end


#endif