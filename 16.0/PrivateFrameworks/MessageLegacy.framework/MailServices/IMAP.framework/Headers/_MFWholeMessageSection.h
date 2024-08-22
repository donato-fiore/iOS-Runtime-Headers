// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFWHOLEMESSAGESECTION_H
#define _MFWHOLEMESSAGESECTION_H

@class MFDataHolder;
@protocol MFMessageDataSection;

#import <Foundation/Foundation.h>


@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>



@property (retain, nonatomic) MFDataHolder *dataHolder; // ivar: _dataHolder


-(BOOL)isComplete;
-(BOOL)isPartial;
-(id)partName;
-(void)dealloc;


@end


#endif