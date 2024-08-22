// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMASSISTANTURLWITHMETADATA_H
#define IMASSISTANTURLWITHMETADATA_H

@class LPLinkMetadata, NSURL;

#import <Foundation/Foundation.h>


@interface IMAssistantURLWithMetadata : NSObject

@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 metadata:(id)arg1 ;


@end


#endif