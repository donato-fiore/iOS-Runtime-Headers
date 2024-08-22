// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTREFRESHEVENT_H
#define VUIAPPDOCUMENTREFRESHEVENT_H

@protocol NSCopying;


#import "VUIAppDocumentUpdateEvent.h"

@interface VUIAppDocumentRefreshEvent : VUIAppDocumentUpdateEvent <NSCopying>





-(id)_refreshEventDescriptor;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithRefreshEventDescriptor:(id)arg0 ;


@end


#endif