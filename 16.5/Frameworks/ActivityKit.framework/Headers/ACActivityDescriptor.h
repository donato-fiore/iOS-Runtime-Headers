// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACTIVITYDESCRIPTOR_H
#define ACACTIVITYDESCRIPTOR_H

@class NSString, NSDate, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ACActivityPresentationOptions.h"

@interface ACActivityDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (copy, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (copy, nonatomic) NSData *descriptorData; // ivar: _descriptorData
@property (nonatomic) BOOL isEphemeral; // ivar: _isEphemeral
@property (copy, nonatomic) NSString *platterTargetBundleIdentifier; // ivar: _platterTargetBundleIdentifier
@property (retain, nonatomic) ACActivityPresentationOptions *presentationOptions; // ivar: _presentationOptions


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 target:(id)arg1 presentationOptions:(id)arg2 isEphemeral:(BOOL)arg3 createdDate:(id)arg4 descriptorData:(id)arg5 contentType:(NSInteger)arg6 ;


@end


#endif