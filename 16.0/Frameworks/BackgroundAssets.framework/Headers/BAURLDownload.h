// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BAURLDOWNLOAD_H
#define BAURLDOWNLOAD_H

@class NSURLRequest;


#import "BADownload.h"

@interface BAURLDownload : BADownload

@property (retain) NSURLRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 request:(id)arg1 applicationGroupIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 request:(id)arg1 applicationGroupIdentifier:(id)arg2 priority:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)syncTo:(id)arg0 ;


@end


#endif