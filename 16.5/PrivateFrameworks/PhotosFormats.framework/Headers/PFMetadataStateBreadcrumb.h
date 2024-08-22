// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMETADATASTATEBREADCRUMB_H
#define PFMETADATASTATEBREADCRUMB_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFMetadataStateBreadcrumb : NSObject

@property (readonly, copy) NSString *breadcrumbDescription;
@property (readonly, copy) NSString *message; // ivar: _message
@property (readonly) unsigned int qualityOfService; // ivar: _qualityOfService
@property (readonly) NSUInteger threadID; // ivar: _threadID
@property (readonly) CGFloat timeInterval; // ivar: _timeInterval


-(id)initWithTimeInterval:(CGFloat)arg0 message:(id)arg1 ;


@end


#endif