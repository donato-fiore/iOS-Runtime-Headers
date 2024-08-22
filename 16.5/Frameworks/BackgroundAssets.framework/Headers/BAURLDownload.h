// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAURLDOWNLOAD_H
#define BAURLDOWNLOAD_H

@class NSURLRequest;
@protocol NSCopying;


#import "BADownload.h"

@interface BAURLDownload : BADownload <NSCopying>



@property (retain) NSURLRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 request:(id)arg1 applicationGroupIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 request:(id)arg1 applicationGroupIdentifier:(id)arg2 priority:(NSInteger)arg3 ;
-(id)initWithIdentifier:(id)arg0 request:(id)arg1 essential:(BOOL)arg2 fileSize:(NSUInteger)arg3 applicationGroupIdentifier:(id)arg4 priority:(NSInteger)arg5 ;
-(id)initWithIdentifier:(id)arg0 request:(id)arg1 fileSize:(NSUInteger)arg2 applicationGroupIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)syncTo:(id)arg0 ;


@end


#endif