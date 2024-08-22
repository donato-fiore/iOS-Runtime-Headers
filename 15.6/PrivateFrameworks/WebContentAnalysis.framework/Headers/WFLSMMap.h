// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLSMMAP_H
#define WFLSMMAP_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface WFLSMMap : NSObject {
    *__LSMMap map;
}


@property (copy) NSNumber *threshold; // ivar: threshold


+(id)mapFromFilePath:(id)arg0 ;
+(id)mapFromURL:(id)arg0 ;
+(id)mapWithMap:(struct __LSMMap *)arg0 ;
-(NSInteger)numberOfCategories;
-(id)evaluate:(id)arg0 ;
-(id)initWithMap:(struct __LSMMap *)arg0 ;
-(id)initWithMapFromFilePath:(id)arg0 ;
-(id)initWithMapFromURL:(id)arg0 ;
-(id)wordDump:(id)arg0 ;
-(struct __LSMMap *)_map;
-(struct __LSMText *)_createLSMTextFromString:(id)arg0 ;
-(void)_setMap:(struct __LSMMap *)arg0 ;
-(void)dealloc;


@end


#endif