// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKRESPONSEFEATURES_H
#define RKRESPONSEFEATURES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RKResponseFeatures : NSObject

@property (readonly) int count; // ivar: _count
@property (readonly) CGFloat normalizedInputMethodCannedCount; // ivar: _normalizedInputMethodCannedCount
@property (readonly) CGFloat normalizedInputMethodDictationCount; // ivar: _normalizedInputMethodDictationCount
@property (readonly) CGFloat normalizedInputMethodScribbleCount; // ivar: _normalizedInputMethodScribbleCount
@property (readonly) CGFloat normalizedSourceAppCount; // ivar: _normalizedSourceAppCount
@property (readonly) CGFloat normalizedSourceNotificationCount; // ivar: _normalizedSourceNotificationCount
@property (readonly) CGFloat numOfElapsedDays; // ivar: _numOfElapsedDays
@property (readonly) NSString *response; // ivar: _response
@property (readonly) NSUInteger responseLength; // ivar: _responseLength
@property (readonly) int sameRecipientCount; // ivar: _sameRecipientCount


-(id)initWithFeatures:(id)arg0 count:(int)arg1 numOfElapsedDays:(CGFloat)arg2 sourceAppCount:(CGFloat)arg3 sourceNotificationCount:(CGFloat)arg4 inputSourceCannedCount:(CGFloat)arg5 inputSourceScribbleCount:(CGFloat)arg6 inputSourceDictationCount:(CGFloat)arg7 responseLength:(NSUInteger)arg8 sameRecipientCount:(int)arg9 ;


@end


#endif