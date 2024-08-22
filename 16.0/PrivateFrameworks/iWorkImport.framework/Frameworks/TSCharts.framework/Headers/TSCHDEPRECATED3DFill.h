// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHDEPRECATED3DFILL_H
#define TSCHDEPRECATED3DFILL_H

@class TSDFill;
@protocol TSSPropertyValueArchiving;

#import <Foundation/Foundation.h>

#import "TSCH3DLightingModel.h"
#import "TSCH3DFillSetIdentifier.h"

@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving>

 {
    TSDFill *_fill;
    TSCH3DLightingModel *_lightingModel;
    TSCH3DFillSetIdentifier *_identifier;
}




+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)convertToTSDFill;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif