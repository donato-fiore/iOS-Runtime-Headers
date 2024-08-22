// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIREMOTEINPUTVIEWINFO_H
#define UIREMOTEINPUTVIEWINFO_H

@class RTIInputViewInfo;

#import <Foundation/Foundation.h>


@interface UIRemoteInputViewInfo : NSObject

@property (nonatomic) unsigned int contextId; // ivar: _contextId
@property (nonatomic) NSEdgeInsets insets; // ivar: _insets
@property (nonatomic) int processId; // ivar: _processId
@property (readonly, nonatomic) RTIInputViewInfo *rtiInputViewInfo;
@property (nonatomic) CGSize size; // ivar: _size


-(id)description;


@end


#endif