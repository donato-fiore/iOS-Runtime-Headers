// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSHORTCUTACTIONMODEL_H
#define HMDSHORTCUTACTIONMODEL_H

@class NSData;


#import "HMDActionModel.h"

@interface HMDShortcutActionModel : HMDActionModel

@property (retain) NSData *data;


+(Class)backedObjectClass;
+(id)properties;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif