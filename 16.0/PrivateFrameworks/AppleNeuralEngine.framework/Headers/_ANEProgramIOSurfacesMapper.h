// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANEPROGRAMIOSURFACESMAPPER_H
#define _ANEPROGRAMIOSURFACESMAPPER_H


#import <Foundation/Foundation.h>

#import "_ANEDeviceController.h"

@interface _ANEProgramIOSurfacesMapper : NSObject

@property (readonly, nonatomic) _ANEDeviceController *controller; // ivar: _controller
@property (readonly, nonatomic) _ANEDeviceController *deviceController; // ivar: _deviceController
@property (readonly, nonatomic) NSUInteger programHandle; // ivar: _programHandle


+(id)mapperWithController:(id)arg0 ;
+(id)mapperWithProgramHandle:(NSUInteger)arg0 ;
+(id)new;
+(void)initialize;
-(BOOL)mapIOSurfacesWithModel:(id)arg0 request:(id)arg1 cacheInference:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)unmapIOSurfacesWithModel:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateRequest:(id)arg0 model:(id)arg1 ;
-(id)init;
-(id)initWithController:(id)arg0 ;
-(void)dealloc;
-(void)prepareANEMemoryMappingParams:(struct ANEMemoryMappingParamsStruct *)arg0 request:(id)arg1 ;


@end


#endif