// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKLIBRARY_H
#define NPKLIBRARY_H


#import <Foundation/Foundation.h>


@interface NPKLibrary : NSObject

@property (nonatomic) BOOL needsRelevancyInformation; // ivar: _needsRelevancyInformation


+(id)sharedInstance;
-(void)addPassData:(id)arg0 completion:(id)arg1 ;


@end


#endif