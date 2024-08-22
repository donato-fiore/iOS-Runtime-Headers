// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCUSTOMCATALOGMATCHERRESULTBUILDER_H
#define SHCUSTOMCATALOGMATCHERRESULTBUILDER_H


#import <Foundation/Foundation.h>


@interface SHCustomCatalogMatcherResultBuilder : NSObject



-(id)buildTrackingResultsFrom:(id)arg0 ;
-(id)mediaItemsFromTrackID:(NSUInteger)arg0 matchOffset:(CGFloat)arg1 timeSkew:(id)arg2 frequencySkew:(id)arg3 score:(id)arg4 audioStartDate:(id)arg5 trackerResults:(id)arg6 customCatalog:(id)arg7 ;


@end


#endif