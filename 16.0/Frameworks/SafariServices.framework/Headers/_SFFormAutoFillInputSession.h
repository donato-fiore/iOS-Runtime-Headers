// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFFORMAUTOFILLINPUTSESSION_H
#define _SFFORMAUTOFILLINPUTSESSION_H

@class NSDictionary, WBSFormMetadata;
@protocol _WKFocusedElementInfo, _WKFormInputSession;

#import <Foundation/Foundation.h>

#import "SFFormAutoFillFrameHandle.h"

@interface _SFFormAutoFillInputSession : NSObject

@property (readonly, nonatomic) NSDictionary *autoFillInputSessionUserObject; // ivar: _autoFillInputSessionUserObject
@property (readonly, nonatomic) NSObject<_WKFocusedElementInfo> *focusedElementInfo; // ivar: _focusedElementInfo
@property (readonly, nonatomic) NSObject<_WKFormInputSession> *formInputSession; // ivar: _formInputSession
@property (readonly, nonatomic) WBSFormMetadata *formMetadata; // ivar: _formMetadata
@property (readonly, nonatomic) SFFormAutoFillFrameHandle *frameHandle; // ivar: _frameHandle


-(id)_initWithFormInputSession:(id)arg0 focusedElement:(id)arg1 ;
-(id)autoFillInputSessionByReplacingInputSessionUserObject:(id)arg0 ;
-(id)initWithFocusedElement:(id)arg0 ;
-(id)initWithFormInputSession:(id)arg0 ;
-(void)_updateAutoFillInputSessionUserObject:(id)arg0 ;


@end


#endif