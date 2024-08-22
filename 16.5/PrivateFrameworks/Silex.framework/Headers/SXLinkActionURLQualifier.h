// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLINKACTIONURLQUALIFIER_H
#define SXLINKACTIONURLQUALIFIER_H

@class NSString;
@protocol SXLinkActionURLQualifier;

#import <Foundation/Foundation.h>


@interface SXLinkActionURLQualifier : NSObject <SXLinkActionURLQualifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowCopyingOfURL:(id)arg0 ;
-(BOOL)allowOpenInNewWindowForURL:(id)arg0 ;
-(BOOL)allowOpenInSafariForURL:(id)arg0 ;


@end


#endif