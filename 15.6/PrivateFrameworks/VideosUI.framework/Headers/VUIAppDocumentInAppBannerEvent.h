// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPDOCUMENTINAPPBANNEREVENT_H
#define VUIAPPDOCUMENTINAPPBANNEREVENT_H

@class NSString;
@protocol NSCopying;


#import "VUIAppDocumentUpdateEvent.h"

@interface VUIAppDocumentInAppBannerEvent : VUIAppDocumentUpdateEvent <NSCopying>



@property (copy, nonatomic) NSString *targetId; // ivar: _targetId


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithTargetId:(id)arg0 ;


@end


#endif