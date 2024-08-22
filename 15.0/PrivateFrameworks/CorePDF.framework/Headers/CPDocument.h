// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPDOCUMENT_H
#define CPDOCUMENT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CPDocument : NSObject {
    NSMutableArray *pages;
}




-(id)init;
-(void)addPage:(id)arg0 ;
-(void)dealloc;


@end


#endif