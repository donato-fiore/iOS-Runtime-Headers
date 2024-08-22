// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFCALLSITEINFOMUTATION_H
#define _AFCALLSITEINFOMUTATION_H

@class NSString;
@protocol AFCallSiteInfoMutating;

#import <Foundation/Foundation.h>

#import "AFCallSiteInfo.h"

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating>

 {
    AFCallSiteInfo *_baseModel;
    NSString *_imagePath;
    NSString *_symbolName;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setImagePath:(id)arg0 ;
-(void)setSymbolName:(id)arg0 ;


@end


#endif