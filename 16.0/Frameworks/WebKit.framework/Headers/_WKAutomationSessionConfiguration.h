// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKAUTOMATIONSESSIONCONFIGURATION_H
#define _WKAUTOMATIONSESSIONCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL acceptInsecureCertificates; // ivar: _acceptInsecureCertificates
@property (nonatomic) BOOL allowsInsecureMediaCapture; // ivar: _allowsInsecureMediaCapture
@property (nonatomic) BOOL suppressesICECandidateFiltering; // ivar: _suppressesICECandidateFiltering


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif