// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDJSONLOADER_H
#define AMDJSONLOADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMDJSONLoader : NSObject

@property (retain, nonatomic) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 ;
-(id)loadDataFromFileForClass:(Class)arg0 ;


@end


#endif