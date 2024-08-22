// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETAGLINKPRESENTATIONSOURCE_H
#define NETAGLINKPRESENTATIONSOURCE_H

@class LPLinkMetadata;
@protocol NELinkPresentationSource;

#import <Foundation/Foundation.h>

#import "NELinkMetadataSource.h"

@interface NETagLinkPresentationSource : NSObject <NELinkPresentationSource>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) NELinkMetadataSource *linkMetadataSource; // ivar: _linkMetadataSource


-(id)initWithTag:(id)arg0 image:(id)arg1 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 image:(id)arg2 ;


@end


#endif