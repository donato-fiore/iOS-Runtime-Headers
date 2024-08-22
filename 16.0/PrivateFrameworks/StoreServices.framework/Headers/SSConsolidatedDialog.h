// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSCONSOLIDATEDDIALOG_H
#define SSCONSOLIDATEDDIALOG_H

@class NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSConsolidatedDialog : NSObject <SSXPCCoding, NSCopying>



@property (copy) NSString *cancelLabel; // ivar: _cancelLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (copy) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif