// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFBASICMESSAGEDATASECTION_H
#define MFBASICMESSAGEDATASECTION_H

@class MFDataHolder, NSString;
@protocol MFMessageDataSection;

#import <Foundation/Foundation.h>


@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection>



@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (retain, nonatomic) MFDataHolder *dataHolder; // ivar: _dataHolder
@property (retain, nonatomic) NSString *partName; // ivar: _partName
@property (nonatomic, getter=isPartial) BOOL partial; // ivar: _partial


-(void)dealloc;
-(void)setData:(id)arg0 ;


@end


#endif