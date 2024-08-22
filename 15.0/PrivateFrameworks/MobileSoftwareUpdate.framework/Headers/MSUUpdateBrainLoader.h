// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSUUPDATEBRAINLOADER_H
#define MSUUPDATEBRAINLOADER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MSUUpdateBrainLoader : NSObject

@property (retain) NSDictionary *attributesDict; // ivar: _attributesDict


-(BOOL)cancel:(*id)arg0 ;
-(NSInteger)requiredDiskSpace:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)adjustOptions:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)loadUpdateBrainWithOptions:(id)arg0 progressHandler:(id)arg1 ;


@end


#endif