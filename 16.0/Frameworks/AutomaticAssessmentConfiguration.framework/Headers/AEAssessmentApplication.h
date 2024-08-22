// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEASSESSMENTAPPLICATION_H
#define AEASSESSMENTAPPLICATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AEAssessmentApplication : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL requiresSignatureValidation; // ivar: _requiresSignatureValidation
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif