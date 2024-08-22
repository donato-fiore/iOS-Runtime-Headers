// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMOUTPUTREQUESTHANDLE_H
#define AXMOUTPUTREQUESTHANDLE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface AXMOutputRequestHandle : NSObject {
    NSMutableArray *_actionHandles;
}


@property (readonly, nonatomic) NSArray *actionHandles;


-(id)init;
-(void)addActionHandle:(id)arg0 ;


@end


#endif