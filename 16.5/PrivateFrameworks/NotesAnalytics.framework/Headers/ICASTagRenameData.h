// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASTAGRENAMEDATA_H
#define ICASTAGRENAMEDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASTagRenameApproach.h"

@interface ICASTagRenameData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASTagRenameApproach *tagRenameApproach; // ivar: _tagRenameApproach


+(id)dataName;
-(id)initWithTagRenameApproach:(id)arg0 ;
-(id)toDict;


@end


#endif