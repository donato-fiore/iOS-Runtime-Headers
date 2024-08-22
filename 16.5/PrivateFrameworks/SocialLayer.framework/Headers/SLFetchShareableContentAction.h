// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLFETCHSHAREABLECONTENTACTION_H
#define SLFETCHSHAREABLECONTENTACTION_H

@class NSString;


#import "SLShareableContentAction.h"

@interface SLFetchShareableContentAction : SLShareableContentAction

@property (readonly, copy, nonatomic) NSString *requestedTypeIdentifier; // ivar: _requestedTypeIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneIdentifier:(id)arg0 requestedTypeIdentifier:(id)arg1 responseHandler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif