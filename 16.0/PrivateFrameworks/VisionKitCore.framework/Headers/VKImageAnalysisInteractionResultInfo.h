// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKIMAGEANALYSISINTERACTIONRESULTINFO_H
#define VKIMAGEANALYSISINTERACTIONRESULTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKImageAnalysisInteractionResultInfo : NSObject

@property (readonly, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (readonly, nonatomic) NSString *displayMessage; // ivar: _displayMessage
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (readonly, nonatomic) CGRect normalizedBoundingRect; // ivar: _normalizedBoundingRect


-(id)initWithDisplayLabel:(id)arg0 displayMessage:(id)arg1 glyphName:(id)arg2 rect:(struct CGRect )arg3 ;


@end


#endif