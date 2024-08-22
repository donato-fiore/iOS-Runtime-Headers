// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFVARIABLEATTACHMENTPILLVIEWATTRIBUTE_H
#define WFVARIABLEATTACHMENTPILLVIEWATTRIBUTE_H

@class NSString, WFVariablePillView;
@protocol WFVariableAttachmentCellView;

#import <Foundation/Foundation.h>


@interface WFVariableAttachmentPillViewAttribute : NSObject <WFVariableAttachmentCellView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFVariablePillView *pillView; // ivar: _pillView
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif