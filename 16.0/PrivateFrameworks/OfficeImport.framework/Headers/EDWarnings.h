// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDWARNINGS_H
#define EDWARNINGS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface EDWarnings : NSObject {
    NSMutableArray *mWarnings;
}




-(void)addWarning:(id)arg0 ;
-(void)reportWarningsWithAssociatedObject:(id)arg0 ;


@end


#endif