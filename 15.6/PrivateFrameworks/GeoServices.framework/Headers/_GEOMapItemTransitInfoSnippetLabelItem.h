// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOMAPITEMTRANSITINFOSNIPPETLABELITEM_H
#define _GEOMAPITEMTRANSITINFOSNIPPETLABELITEM_H

@class NSString;
@protocol GEOTransitLabelItem, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>


@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *labelArtwork; // ivar: _labelArtwork
@property (readonly, nonatomic) NSString *labelString; // ivar: _labelString
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 labelString:(id)arg1 labelArtwork:(id)arg2 ;


@end


#endif