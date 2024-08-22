// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBLOCKABLEMEMORYFEATUREACTIONINFO_H
#define PXBLOCKABLEMEMORYFEATUREACTIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXBlockableMemoryFeatureActionInfo : NSObject

@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(id)init;
-(id)initWithActionType:(id)arg0 localizedTitle:(id)arg1 ;


@end


#endif