// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISCLICKATTRIBUTION_H
#define UISCLICKATTRIBUTION_H

@class NSURL, BKSHIDEventAuthenticationMessage, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UISClickAttribution : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, copy, nonatomic) BKSHIDEventAuthenticationMessage *eventMessage; // ivar: _eventMessage
@property (readonly, copy, nonatomic) NSString *purchaser; // ivar: _purchaser
@property (readonly, copy, nonatomic) NSURL *reportEndpoint; // ivar: _reportEndpoint
@property (readonly, copy, nonatomic) NSString *sourceDescription; // ivar: _sourceDescription
@property (readonly, nonatomic) unsigned char sourceIdentifier; // ivar: _sourceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)clickAttributionWithReportEndpoint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceIdentifier:(unsigned char)arg0 destinationURL:(id)arg1 reportEndpoint:(id)arg2 sourceDescription:(id)arg3 purchaser:(id)arg4 eventMessage:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif