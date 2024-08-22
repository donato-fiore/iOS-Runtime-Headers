// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLFETCHSHAREABLECONTENTACTIONRESPONSE_H
#define SLFETCHSHAREABLECONTENTACTIONRESPONSE_H

@class NSData, NSURL;


#import "SLShareableContentActionResponse.h"

@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (retain, nonatomic) NSURL *inPlaceFileURL; // ivar: _inPlaceFileURL


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)responseWithDataRepresentation:(id)arg0 ;
+(id)responseWithInPlaceFileURL:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif