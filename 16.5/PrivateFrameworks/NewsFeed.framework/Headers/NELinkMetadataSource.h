// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NELINKMETADATASOURCE_H
#define NELINKMETADATASOURCE_H

@class LPLinkMetadata;
@protocol NELinkPresentationSource;

#import <Foundation/Foundation.h>


@interface NELinkMetadataSource : NSObject <NELinkPresentationSource>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata


-(id)_linkPresentationImageFromImage:(id)arg0 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 image:(id)arg2 ;


@end


#endif