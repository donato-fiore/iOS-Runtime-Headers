// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGUIDESHOMERESULTFILTER_H
#define GEOGUIDESHOMERESULTFILTER_H


#import <Foundation/Foundation.h>

#import "GEOPDGuidesHomeResultFilter.h"
#import "GEOGuidesHomeResultFilterTypeConcept.h"

@interface GEOGuidesHomeResultFilter : NSObject {
    GEOPDGuidesHomeResultFilter *_resultFilter;
}


@property (readonly, nonatomic) GEOGuidesHomeResultFilterTypeConcept *conceptFilter;
@property (readonly, nonatomic) NSInteger filterType;
@property (readonly, nonatomic) GEOPDGuidesHomeResultFilter *pdResultFilter;


-(id)initWithGuidesHomeResultFilter:(id)arg0 ;


@end


#endif