// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKFEEDBACKATTACHMENT_H
#define VKFEEDBACKATTACHMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKFeedbackAttachment : NSObject

@property (readonly, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) BOOL isOptional; // ivar: _isOptional
@property (readonly, nonatomic) NSString *label; // ivar: _label


-(id)initWithFileName:(id)arg0 label:(id)arg1 isOptional:(BOOL)arg2 ;


@end


#endif