// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMLSTORAGEMANAGER_H
#define CPMLSTORAGEMANAGER_H


#import <Foundation/Foundation.h>


@interface CPMLStorageManager : NSObject



-(id)readValue:(id)arg0 withDoublePtr:(*CGFloat)arg1 withItemCount:(id)arg2 ;
-(id)readValue:(id)arg0 withIntPtr:(*int)arg1 withItemCount:(id)arg2 ;
-(id)readValue:(id)arg0 withUIntPtr:(*unsigned int)arg1 withItemCount:(id)arg2 ;
-(id)writeValue:(id)arg0 withDoublePtr:(*CGFloat)arg1 withItemCount:(id)arg2 ;
-(id)writeValue:(id)arg0 withIntPtr:(*int)arg1 withItemCount:(id)arg2 ;
-(id)writeValue:(id)arg0 withUIntPtr:(*unsigned int)arg1 withItemCount:(id)arg2 ;


@end


#endif