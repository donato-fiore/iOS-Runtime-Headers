// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIRENDERINFO_H
#define CIRENDERINFO_H


#import <Foundation/Foundation.h>


@interface CIRenderInfo : NSObject {
    *void _priv;
}


@property (readonly) CGFloat kernelExecutionTime;
@property (readonly) NSInteger passCount;
@property (readonly) NSInteger pixelsProcessed;


+(id)renderInfoWithCompletedTask:(id)arg0 ;
-(CGFloat)timeForNodeID:(NSUInteger)arg0 ;
-(NSInteger)kernelExecutionCycles;
-(NSInteger)pixelsOverdrawn;
-(id)_pdfDataRepresentation;
-(id)description;
-(id)init;
-(id)initWithCompletedTask:(id)arg0 ;
-(void)dealloc;


@end


#endif