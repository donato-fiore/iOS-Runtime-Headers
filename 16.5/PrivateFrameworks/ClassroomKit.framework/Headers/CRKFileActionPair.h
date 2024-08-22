// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFILEACTIONPAIR_H
#define CRKFILEACTIONPAIR_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CRKFileActionPair : NSObject

@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 ;


@end


#endif