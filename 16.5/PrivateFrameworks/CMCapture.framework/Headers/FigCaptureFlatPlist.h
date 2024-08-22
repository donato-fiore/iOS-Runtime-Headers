// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREFLATPLIST_H
#define FIGCAPTUREFLATPLIST_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface FigCaptureFlatPlist : NSObject {
    NSMutableData *_data;
    ? _bplist;
}




+(id)flatPlistWithContentsOfFile:(id)arg0 ;
+(id)flatPlistWithContentsOfURL:(id)arg0 ;
-(struct ? *)bplist;
-(void)dealloc;


@end


#endif