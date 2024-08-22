// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIEVENTATTRIBUTION_H
#define UIEVENTATTRIBUTION_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIEventAttribution : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, copy, nonatomic) NSString *purchaser; // ivar: _purchaser
@property (readonly, copy, nonatomic) NSURL *reportEndpoint; // ivar: _reportEndpoint
@property (readonly, copy, nonatomic) NSString *sourceDescription; // ivar: _sourceDescription
@property (readonly, nonatomic) unsigned char sourceIdentifier; // ivar: _sourceIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceIdentifier:(unsigned char)arg0 destinationURL:(id)arg1 reportEndpoint:(id)arg2 sourceDescription:(id)arg3 purchaser:(id)arg4 ;
-(id)initWithSourceIdentifier:(unsigned char)arg0 destinationURL:(id)arg1 sourceDescription:(id)arg2 purchaser:(id)arg3 ;
-(id)initWithUISClickAttribution:(id)arg0 ;
-(id)toUISClickAttribution;


@end


#endif