// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDHYPERLINKFIELDMARKER_H
#define WDHYPERLINKFIELDMARKER_H

@class NSString;


#import "WDFieldMarker.h"

@interface WDHyperlinkFieldMarker : WDFieldMarker

@property (retain, nonatomic) NSString *fragment; // ivar: mFragment
@property (nonatomic) BOOL internalLink; // ivar: mInternalLink
@property (retain, nonatomic) NSString *link; // ivar: mLink


-(id)description;
-(int)runType;


@end


#endif